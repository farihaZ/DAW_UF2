#include<stdio.h>
#include "function.h"
#define SIZE 15

void main(){
    int num ,i;
    float avg_apr,avg_sus;
    for(i=0; i<SIZE; i++){
    
        num = validate(num);
       
        if (num >= 5 && num <= 10) {
            avg_apr = average(num);
            
        }
        if(num >= 0 && num < 5) {
            avg_sus = average(num);
            
        }    
        
    }
    printf("passed : %f\n",avg_apr);
    printf("failed : %f\n",avg_sus);
}

