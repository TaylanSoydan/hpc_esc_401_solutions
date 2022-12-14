1. GPU is slower because we waste time on  transfering data to memory

![image](https://user-images.githubusercontent.com/73917265/207622701-987476d6-9e81-4eb0-913b-cf0fe819a02a.png)

2. With naive approach you need to transfer the data more than once. The no copies version does not transfer the data more than once. GPU is nearly 20 times faster. 

![image](https://user-images.githubusercontent.com/73917265/207622770-14867afe-86cb-4108-88bf-ac68e8b1dbed.png)

3.Every thread is trying to overwrite the result, this is a problem. We use a reduction to solve this problem. GPU took much more time 0.02 sec vs. 0.0008 sec

![image](https://user-images.githubusercontent.com/73917265/207622872-ab71d3ee-d9c0-44e3-ada6-2b1964941361.png)

