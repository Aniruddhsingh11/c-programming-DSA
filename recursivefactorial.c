#include<stdio.h>

int fact(int n)
{
return (n==1?1:n*fact(n-1));
}
int main()
{
int a, f;
printf("\n enter any no. ");
scanf("%d",&a);
f=fact(a);
printf("factorial =%d",f);
return 0;
}