#include <stdio.h>
// declaration of the functions
int validate(int); 
int validatearr(int);
float average (int *,int);

// main fuction
void main(){
    int size, max =0 ,min =10;
    float avg;
    size = validate(size);//validation of the size of array
    int nota[size];
    
    for (int i=0;i<size;i++){
        
        nota[i]=validatearr(nota[i]);//validation of the values of array
        
        //condition to find the minimum and the maximum value of the array
        if (nota[i] < min) {
			min = nota[i];
		}else {
			max = nota[i];
		}
    } 
    avg  = average(nota,size);
    printf("Average :%f",avg );
    printf("\nmin:%d",min);
    printf("\nmax:%d",max);
}

// function to validate the size of the array
int validate(int n){
    
    do{
        printf("Enter the lenght of the array (between 1 and 50)?:" );
        scanf("%d",&n);
    }while(n<1 || n >50);
    return n;
}

//function to validate the values of the array
int validatearr(int n){
    
    do{
        printf("Enter the value and shoul be between 10 and 10:" );
        scanf("%d",&n);
    }while(n<0 || n >10);
    return n;
}

// function to find the average
float average (int *n,int size ){
    float avg = 0,sum =0;

    for (int i = 0; i < size; i++){
        sum += n[i];
    }
    return sum / size;
}

        


