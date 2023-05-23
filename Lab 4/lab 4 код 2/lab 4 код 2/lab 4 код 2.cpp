#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[5];
    int B[6];
    int C[11];
    int V[11];
    int o=0;
    
    for (int i = 0; i <= 4; i++) {
        A[i] =  -1*rand() ;
        
    }
    for (int i = 0; i <= 5; i++) {
        B[i] = rand();

    }
    for (int i = 0; i <= 4; i++) {
        C[i] = A[i];
       
    }
    for (int i = 0; i <= 5; i++) {
        C[i+5] = B[i];
    }
    for (int i = 0; i <= 10; i++) {
        printf("Massive= % d\n", C[i]);
    }

    for (int i = 0; i <= 11; i++) {
        if (C[i] > 0) {
            printf(" +=% d\n", C[i]);
        } else {
            V[o]=C[i]  ;
            o++;
        }
    }
    for (int i = 0; i <= 5; i++) {
        printf(" % d\n", V[i]);
    }
}


