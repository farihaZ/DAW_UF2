#include <stdio.h>
#include "function.h"

int readnum(char *msg){
    int num;
    printf("%s", msg);
    scanf("%d", &num);
    return num;

}
int reverse(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    
}
