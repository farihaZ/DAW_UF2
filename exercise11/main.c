#include <stdio.h>
#define SIZE 200
void evennumbers();

void main(){
   
   evennumbers();
   
}

void evennumbers(){
    int i=1;
    printf("the array of first 100 even number is :\n [");
    for (i=1;i<=SIZE;i++){
        
        if (i%2 == 0){
           printf("%d,",i); 
           
        }
        
    }
    printf("]");
}
