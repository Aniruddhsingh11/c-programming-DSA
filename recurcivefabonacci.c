#include<stdio.h>
int fibonacci(int n)
{
    if(n==1)return (1);
    else if(n==2)return (1);
    else
    return(fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
    int a,s;
    printf("ENTER A NUMBER\n");
    scanf("%d",&a);
    s=fibonacci(a);
    printf("THE SUM FIBONACCI IS %d\n",s);
    return 0;
}