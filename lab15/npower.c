#include <stdio.h>
#include <math.h>
int power();
int main()
{
    int n,k,p;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter k:");
    scanf("%d",&k);
    p=power(n,k);
    printf("Value of n^k: %d",p);

    return 0;
}

int power(int a,int b)
{
    int i;
    i=pow(a,b);
    return i;
}