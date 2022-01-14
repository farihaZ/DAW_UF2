
#include<stdio.h>
#include "function.h"

int validate(int n){
     
     do {
         printf("Introduce the decimal number : ");
         scanf("%d",&n);
         
     }while( n < 0 );
     
}

int decimaltobinary(int n){
    int count=1,rem=1,bin=0;
    
    while(n != 0){
        rem = n % 2;
   	    n /= 2;
   	    bin = bin+rem*count ;
   	    count*=10;
    }
    
    return bin;
}