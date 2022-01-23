#include <stdio.h>
#include<math.h>
int validate(char *);

void main()
{
    int x ,y,power;
    
    x = validate("introduce the value of x : \n");
    y = validate("introduce the value of y: \n");
    power = pow(x,y);
    printf(" %d ^ %d = %d",x,y,power);
}


int validate(char* msg){
    int n;
    do {
        printf("%s",msg);
        scanf("%d",&n);
    }while (n <= 0);
    return n;

}

