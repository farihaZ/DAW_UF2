#include <stdio.h>
struct library{
    char title[100];
    char author[50];
    int editorial;
    char date[10];
    int unit;
    char user[100];
    int days;
    
};

int validate(int);
void modifyData(struct library *, int);
void printData(struct library *, int);


void main(){
    
    int size ;
    size = validate(size);
    struct library book [size];
    modifyData(book, size);
    printData(book, size);
}



int validate (int n){
    
    do {
        printf("How many books do you want to register :");
        scanf("%d",&n);
    }while (n<=0);
}



void modifyData(struct library *o,int size){ //punter a office
    for(int i=0; i<size;i++){
        printf("Title of the book: \n");
   	    scanf("%s",o[i].title);
   	    printf("Author: \n");
   	    scanf("%s",o[i].author);
   	    printf("Editorial: \n");
   	    scanf("%d",&o[i].editorial);
   	    printf("Date of publication: \n");
   	    scanf("%s",o[i].date);
   	    printf("how many books are available: \n");
   	    scanf("%d",&o[i].unit);
   	    printf("User who lend the book: \n");
   	    scanf("%s",o[i].user);
   	    printf("for how many days: \n");
   	    scanf("%d",&o[i].days);
   	    
    }
    
}



void printData(struct library *o, int size){
    printf("------------------------------------------------\n");
    
    for(int i=0; i<size; i++){
    	printf("these are the data of each book: [%d]\n", i+1);
    	printf("Title of the book: %s\n", o[i].title);
    	printf("Author: %s\n", o[i].author);
    	printf("Editorial: %d\n", o[i].editorial);
    	printf("Date of publication: %s\n", o[i].date);
    	printf("how many books are available: %d\n", o[i].unit);
    	printf("User who lend the book:%s \n",o[i].user);
    	printf("for how many days: %d\n",o[i].days);
    	printf("------------------------------------------------\n");
    	printf("\n ");
    }
}


