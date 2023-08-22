#include<stdio.h>

int main()
{
    int x,y,*a,*b,t;

    printf("enter value of x and y \n");
    scanf("%d %d",&x,&y);

    printf("\n\nvalue before swapping\nx = %d\ty = %d\n\n",x,y);

    a=&x;
    b=&y;

    t=*b;
    *b=*a;
    *a=t;

    printf("value after swapping\nx=%d\ty=%d\n\n",x,y);

    return 0;
}

