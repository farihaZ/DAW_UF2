#include <stdio.h>
// declaration of the functions
int validate(int); 
int validatearr(int);
void sortaar(int *,int  );
void printarr(int *, int);
// main fuction
void main(){
    int size;
    size = validate(size);//validation of the size of array
    int nota[size];
    
    for (int i=0;i<size;i++){
        
        nota[i]=validatearr(nota[i]);//validation of the values of array
        
    } 
    
    sortaar(nota,size);
    printarr(nota,size); 

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
    }while(n<0 );
    return n;
}

void sortaar(int *n,int size ){
    int temp;
    for (int i = 0; i < size-1; i++) {
 	    for(int j = i + 1; j < size; j++) {
        	if (n[i] < n[j]) {
        	    temp = n[i];
         	    n[i] = n[j];
         	    n[j] = temp;
         	}    	 
 	    }	 
    }
    
}
void printarr(int *n,int size){
    printf("Array in descending order is:  [");
    for(int i=0;i< size;i++){
        printf("%d,", n[i]);
    }
    printf("]");
}    
