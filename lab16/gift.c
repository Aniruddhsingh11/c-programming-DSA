#include<stdio.h>
int main ()
{
    int a;
    printf("enter 1 if you pass in maths\n");
    printf("enter 2 if you pass in science\n");
    printf("enter 3 if you pass in both maths and science\n");
    scanf("%d",&a);
    if(a==3)
    {
        printf("you won the prize of 45 rupee");

    }
    else if (a==2)
    {
        printf("you won the prize of 15");
    }
    else if (a==1)
    {
        printf("you won the prize of ruppe 15");
    }
    else 
        printf("you are fail");
        return 0;
}