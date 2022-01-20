#include <stdio.h>
#include "function.h"
#define hours_in_day 24
#define min_in_hour 60
#define sec_in_min 60
long validate(long inseconds){
    
    do{
        printf("introduced the time in seconds in natural numbers : ");
        scanf("%ld",&inseconds);
        
    } while(inseconds < 0);
    return inseconds;
    
}

void calculatetime(){

    long inseconds; int sec,min,hours,days,x; 
    int inmin,inhour;
    
    sec= inseconds % sec_in_min;
    
    inmin= inseconds / sec_in_min;
    min= inmin % min_in_hour;
    
    inhour=inmin / min_in_hour;
    hours= inhour % hours_in_day;
    
    days= inhour / hours_in_day;
    
    printf("%ddays : %dhours : %dminutes : %dseconds",days,hours,min,sec);
    
     
}