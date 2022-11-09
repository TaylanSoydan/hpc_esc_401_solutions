#include <stdio.h>
#include "mpi.h"

static long nsteps = 1000000000
static double actual_pi = 3.141592653589793

int main(int argc, char* argv[]){
	int n, myrank, nprocs;
	double input_pi,output_pi, sum, x;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
	MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
		sum = 0.0;
		for (long i = myrank ; i < nsteps; i+= nprocs) {
			x = 1.0 / (2 * i + 1) ;
		if (i%2){
		    	x = 0 - x;
		}
			sum = sum + x;
		}
		input_pi = sum;
		MPI_Reduce(&input_pi, &output_pi, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);

		if (myrank == 0) {
			printf("pi is %.16f, with error %.16f\n", 4 * output_pi, 4 *output_ pi - actual_pi);
	}
	MPI_Finalize();
	return 0;
}
