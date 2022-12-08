1.

tsoydan@daint104:~/hpc_esc_401_solutions/exercise_session_11/openacc> cat slurm-43340271.out

PI = 3.141592653589793 computed in 0.235 seconds

PI = 3.141592653589793 computed in 0.01401 seconds

PI = 3.141592653589793 computed in 0.01398 seconds

PI = 3.141592653589793 computed in 0.01397 seconds

PI = 3.141592653589793 computed in 0.01398 seconds



The first time takes longer because initialization and setup takes some time. The rest is fast and similar.



2.

tsoydan@daint104:~/hpc_esc_401_solutions/exercise_session_11/cuda> cat slurm-43373792.out

PI = 3.14159265358979 computed in 0.08622 seconds

PI = 3.141592656731382 computed in 0.08008 seconds

PI = 3.141592656731382 computed in 0.07732 seconds

PI = 3.141592656731382 computed in 0.07693 seconds

PI = 3.141592656731382 computed in 0.07684 seconds



The first time took slightly longer due to possible not using the optimal architecture. But it was moreorless the same this time.



3.

The computation time decreases as we increase the blocks or threads.

When i grouped the average time by the number of blocks there is a logarithmic decrease behavior.

![image](https://user-images.githubusercontent.com/73917265/206521201-e81986b2-6418-4c55-9972-9eb3742e2a63.png)

Similar case with number of threads

![image](https://user-images.githubusercontent.com/73917265/206521463-0a399ca4-2d45-4daa-a2c4-7592f17c1f73.png)


When we plot them together


![Figure_1](https://user-images.githubusercontent.com/73917265/206519856-304bd965-d9d5-4401-bc92-446d933ab937.png)



Here x axis is the number of blocks and y axis is the number of threads. The third axis (colors) is the compilation time.



