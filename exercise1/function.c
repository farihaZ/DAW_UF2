#include "function.h"

int validate(){
   int n,i=0;
   
   do{
      
        printf("introduce the number between 10 and 5000");
        scanf("%d",&n);
        i++;
       
   }while(n>5000 || n< 10 && i <3);
   if(i==3){
       
       printf("you miss the intention of intriducing the right number ");
   }else {
       
        printf("you introduced the number correctly");
   }
}