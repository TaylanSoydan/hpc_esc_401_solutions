1.	The communication gets blocked due to ranks expecting simultaneous answers from each other ending up in a deadlock. The even-odd approach breaks the locking symmetry so that ranks can start messaging. Its not an optimal solution. The code file is ring.cpp. This is the output.

![image](https://user-images.githubusercontent.com/73917265/201134492-e0a02943-5f6d-4ca3-a647-8a52cec2bac7.png)

2.	ISend and IRecv are nonblocking routines and they use infiniband network which has a low latency. Its cutting communication costs in the expense of memory leak potential and higher algorithmic complexity. The code file is ring2.cpp

3.	The pi output is in the slurm file slurm-1087631.out and the code file is pi.cpp

![image](https://user-images.githubusercontent.com/73917265/201134513-84e1aba4-1c55-41ef-8743-a32f2d9cbecc.png)

