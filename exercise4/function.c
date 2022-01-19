#include<stdio.h>
#include "function.h"
#define SIZE 15
int validate(int n){
    int i;
    do{
        printf("Introduce the exam results between 0 and 10 :");
        scanf("%d",&n);
    }while(n <0 || n > 10);
    return n;
    }


float average (int n){
    int i;
    float sum = 0, avg = 0;

    for (i = 0; i < SIZE; i++){
        sum += n;
    }
    avg = sum / SIZE;
    return avg;
}