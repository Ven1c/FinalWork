﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    float ff15 = 0;
    float sum =0;
    int arr[10];
    for (int i = 0; i <= 9; i++) {
        arr[i] = 1+rand()%10;
        printf(" % d\n", arr[i]);
        sum = sum + arr[i];
    }
    ff15 = sum / 10 ;
    
    printf(" % f\n", ff15);
    //Проверка на маленькость
    if (ff15 > 0) {
        printf(" Bolshe 0 \n");
    }
    else { printf(" Menshe 0 \n"); }
}

