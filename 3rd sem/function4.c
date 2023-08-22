//print the table by using function
#include<stdio.h>
void tab(int num);
int main ()
{
int num;
    printf("enter the number:");
    scanf("%d",&num);
    tab(num);
    return 0;
}
void tab(int num)
{
    for(int i=1; i<=10; i++)
    {
        printf("%d\n",i*num);
    }
}