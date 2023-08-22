#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("enter a number:");
    scanf("%d",&num1);
    printf("enter a number:");
    scanf("%d",&num2);
    if(num1>num2){
        printf("greatest no is %d",num1);
    }
    else if(num2>num1)
    {
        printf("greatest no is %d",num2);
    }
    return 0;
    }
