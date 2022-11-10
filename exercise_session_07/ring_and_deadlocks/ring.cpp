#include "mpi.h"
#include <stdio.h>

int main(int argc, char** argv) {
    // Initialize the MPI environment
    int tag = 100;
    MPI_Status status;
    MPI_Init(NULL, NULL);

    // Get the number of processes and rank of the process
    int size, my_rank;
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);           
    int total = my_rank;
    int send_rank = my_rank;  // Send    buffer
    int recv_rank = 0;        // Receive buffer

    // Compute the ranks of left/right neighbours 
    int left_rank, right_rank;
    left_rank = (my_rank + size - 1)%size;
    right_rank = (my_rank + 1) % size;

    // Loop over the number of processes
    //     send to right, receive from left
    //     update the send buffer
    //     update the local sum

    for (int i = 0; i < size - 1; i++) {
	if (my_rank % 2) {
		MPI_Recv(&recv_rank, 1, MPI_INTEGER, left_rank, tag, MPI_COMM_WORLD, &status);
		MPI_Send(&send_rank, 1, MPI_INTEGER, right_rank, tag, MPI_COMM_WORLD);
	}
	else {
		MPI_Send(&send_rank, 1, MPI_INTEGER, right_rank, tag, MPI_COMM_WORLD);
		MPI_Recv(&recv_rank, 1, MPI_INTEGER, left_rank, tag, MPI_COMM_WORLD, &status);
	}
	send_rank = recv_rank;
	total+=recv_rank;
    }

    printf("I am processor %d out of %d, and the sum is %d\n", my_rank, size, total);

    // Finalize the MPI environment.
    MPI_Finalize();
}
