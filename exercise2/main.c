#include <stdio.h>
#include "function.h"


void main(){
    long secs;
    int T;
    secs =validate(secs);
    T=calculatetime();
}







/*
#define hours_in_day 24
#define min_in_hour 60
#define sec_in_min 60
void main(){
    
    long inseconds ;
    int inmin,inhour;
    int days,min,hours,sec;
    
    printf("introduced the time in seconds : ");
    scanf("%ld",&inseconds);
    while(inseconds<0){
        printf("introduced the time in seconds in natural numbers : ");
        scanf("%ld",&inseconds);
        
    }
    
    sec = inseconds % sec_in_min ;
    
    inmin= inseconds / sec_in_min ;
    min= inmin % min_in_hour;
    
    inhour=inmin / min_in_hour;
    hours=inhour % hours_in_day;
    
    days = inhour / hours_in_day;
    
    
    printf("%ddays %dhours %dmin %dsec",days,hours,min,sec);
    
    
}*/