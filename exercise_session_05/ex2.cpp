#include <iostream>
using namespace std;


int main()
{
    int ** M = new int *[2];
    M[0] = new int[5]{0,1,2,3,4};
    M[1] = new int[5]{5,6,7,8,9};
    
    int temp;
    for (int i=0; i<5; i++){
        temp = *(*M + i);
        *(*M + i) = *(*(M + 1) + 4 - i);
        *(*(M + 1) + 4 - i) = temp;
    }

    for (int i=0; i<5; i++){
        printf("%d ",M[0][i]);
    }
    for (int i=0; i<5; i++){
        printf("%d ",M[1][i]);
    }


    return 0;
}