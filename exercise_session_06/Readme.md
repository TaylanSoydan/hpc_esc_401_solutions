Ex1:
Serial original code yields a stable answer.
Applying paralel code yields unstable results each time I run it. I.e different amount of total zeros each time.
Applying atomic and critical commands yields the same stable answer as the serial one.
Applying reduction also yields the same stable answer. My code compiles in serial.
![ex1q1](https://user-images.githubusercontent.com/73917265/199523617-21298a41-d1e8-4f70-9cae-352964eb0006.png)
![q1](https://user-images.githubusercontent.com/73917265/199523630-98d68ca6-e9ea-4ce5-8fad-2c325efbc5fd.png)
![reduction](https://user-images.githubusercontent.com/73917265/199523648-cf46e74d-f4d5-4c31-95e5-943ea096170b.png)

Ex2:
My parallel code is present in the jacobi.cpp and I got the same answers for 1 and 4 threads. 41021 iterations for both cases.

Ex3:
The algorithm has polynomial time complexity O(N^2). Can be justified due to the nested for loops and empirically yields linear graphs when the X axis is squared.


![Figure_1](https://user-images.githubusercontent.com/73917265/199523208-febd72ca-3cd4-4062-a69c-34b0b9ca1985.png)
