#include <iostream>
#include <stdlib.h>

typedef struct complex_v {
    int *real;
    int *img;
} complex_v;

int linear_combination (complex_v x, complex_v y, int a) {
    complex_v z;
    z.real = new int [2]; 
    z.img = new int [2];  
    for (int i = 0; i<2; i++) {
        z.real[i] = x.real[i] + a * y.real[i];
        z.img[i] = x.img[i] + a * y.img[i];
        printf("%d", z.real[i]);
    }    
    delete [] z.real, z.img;
    return 0;
}

int main(){
complex_v x;
complex_v y;

x.real = new int [2]  {1, 1}; 
x.img = new int [2] {1, -1}; 
y.real = new int [2] {3, 5}; 
y.img = new int [2]  {2, -3};

int res = linear_combination(x,y,5);

delete [] x.real, x.img, y.real, y.img;

return 0;
}

