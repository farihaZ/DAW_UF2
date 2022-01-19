#include <stdio.h>
#include "function.h"


int main()
{
    int num1 ,num2;
    
    num1 = readnum("introduce the first number : \n");
    num2 = readnum("introduce the second number: \n");

    reverse( &num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);
    
}

