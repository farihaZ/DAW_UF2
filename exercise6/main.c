#include <stdio.h>
// declaration of the function
int readnum(int);
int suma();

void main()
{
    int num,sum;
    num= readnum(num);
    sum= suma();
    printf("the sum is :%d",sum);
}

int readnum(int n){
    printf("introduce the number :");
    scanf("%d",&n);
    return n;
}

int suma(){
    int n ,i=0,sum=0,total=0;
    if (n>0){
        while (i <n){
            total += i ;
            if (total <= n){
                printf("%d ",i);
                sum += i;
            }
        i++;  
        }
    }
    else
    {
        while (i>n){
            total += i ;
            if (total >= n){
                printf("%d ",i);
                sum += i;
            }
        i--;  
        }
        
    }
    printf("\n");
    return sum;
}



