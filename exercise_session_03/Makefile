sum0	: sum0.o gettime.o
		cc -o sum sum0.o gettime.o

sum1	: sum1.o gettime.o
		cc -o sum1 sum1.o gettime.o

sum2	: sum2.o gettime.o
		cc -o sum2 sum2.o gettime.o

sum3	: sum3.o gettime.o
		cc -o sum3 sum3.o gettime.o

sum0.o	: sum.c gettime.h
		cc -O0 -ffast-math -c -o sum0.o sum.c

sum1.o	: sum.c gettime.h
		cc -O1 -ffast-math -c -o sum1.o sum.c

sum2.o	: sum.c gettime.h
		cc -O2 -ffast-math -c -o sum2.o sum.c

sum3.o	: sum.c gettime.h
		cc -O3 -ffast-math -c -o sum3.o sum.c

gettime.o:gettime.c gettime.h

clean: 	rm -f sum sum.o gettime.o


#FLAGS=-Wall -O3 -ffast-math -mavx2
#CC=cc

#cpi_mpi : cpi_mpi.o gettime.o

#cpi_mpi.o : cpi_mpi.c gettime.h

#gettime.o: gettime.c gettime.h

#clean: 	rm -f cpi_mpi cpi_mpi.o gettime.o
##cpi : cpi.o gettime.o
#	cpi cpi.o gettime.o
#cpi.o : cpi2.c gettime.h
#	cpi.o cpi2.c
#gettime.o: gettime.c gettime.h
#	gettime.o gettime.c
#clean:
#	rm -f cpi cpi.o gettime.o cpi_mpi cpi_mpi.o gettime.o
