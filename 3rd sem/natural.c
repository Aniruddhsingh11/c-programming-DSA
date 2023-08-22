//natural number or not
#include<stdio.h>
int main ()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("the number is natural number\n");
    }
    else if(num<0)
    {
        printf("the number is not natural\n");
    }
    return 0;
}