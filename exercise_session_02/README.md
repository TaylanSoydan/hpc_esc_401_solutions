# Exercise Session 02 #
In this session, you will compile and run your first programs on Piz Daint. This directory contains two versions of the code that were parallelized using MPI or OpenMP.

My notes:
I am using gnu environment
Result of "module list" is the currently loaded 11 modules. Result of "module avail" is the list of available modules. Result of "module spider" is the list of available modules and extensions.

Job script for mpi is "mpi.job" and job script for omp is "omp.job". Output log for mpi is "cpi_mpi.out" and for omp is "cpi_omp.out".

I used squeue -o "%A %u %p %a %j %D %.2t %r %S %L %p" for the customized output.

one failure I had was I assumed once I switched to gnu it would stay that way in my future logins but actually it reseted back to cray.
when I changed -O3 to -O0 the error increased as well as the compiling duration. "exercise4omp.out" is the log for the experiment.

bonus:
here is my experiment with increasing threads
n	t(sec)
1	4,4940
2	2,2690
5	0,9054
10	0,4580
20	0,2321
50	0,0982
100	0,1038
![image](https://user-images.githubusercontent.com/73917265/194357534-4c30e87a-f6a3-4e96-b271-55e409655d12.png)

![image](https://user-images.githubusercontent.com/73917265/194360012-c772192a-9133-44f3-8a45-65ad6bda1911.png)



