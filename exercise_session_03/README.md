# Exercise Session 03 #
In this session, you will work on modularization of the code and compilation optimization. Moreover, you will parallelize a simple code and successively plot its speedup. 

In this folder you can find:

* cpi.c : the serial version of last week parallel code, needed for Exercise 1
* cpi_mpi.c : the MPI version of cpi code, for Exercise 1
* sum.c : the code needed for Exercise 2 

Exercise 1:
Modify the serial version so that it includes your new module. Add instructions to the makefile to compile the new module and the new serial version.
cpi2.c is the modified serial version and Makefile is the makefile to execute it.
cpi_mpi.c is the modified mpi code and Makefile.mpi is the makefile to execute it.

[eiger][tsoydan@nid001080 exercise_session_03]$ ./cpi_mpi
Process rank: 0
pi is approximately 3.1415926555899709, Error is 0.0000000020001778
Computed in 3.411 seconds
time elapsed: 3.848594.

Doing the timing outside the function took longer because mpi finalize takes some time.

Exercise 2:
![sum_durations](https://user-images.githubusercontent.com/73917265/195615677-cf702f95-5c1f-4fc0-89a2-6379ce7bc96e.png)
Another way of timing your code is to add time before the command you want to measure. For example: time ls.
The 01 opt flag cut the duration by 3, the rest didnt improve the execution time.
Compiler optimization is done using a sequence of transformations that take a program and produce a equivalent output program that uses fewer resources or executes faster such as using mathematical properties and heuristics.
You can make it even faster with further optimization and vectorization.
I placed the reduction code right before the for loop. I added the flag -fopenmp to my makefile. 
My job script is mpi.job and the code is cpi_mpi.c
![plot](https://user-images.githubusercontent.com/73917265/195618909-39dea39b-eb32-4146-a3d0-325529b0e331.png)
the speedup diminishes after 20 threads because the serial part bottlenecks the algorithm. A superlinear behavior is observed in a short interval but its a crude graph with few data points.

Exercise 3:
One main reason is the cache effect as when we parallelize not only number of processors change but also the accumulated cache changes. With larger cache more of the working set can fit and memory access time is reduced.
