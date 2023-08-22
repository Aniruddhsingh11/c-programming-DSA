#include<stdio.h>
int sumofdigits(int n)
{
    if(n/10==0)return n;
    else
    return(n%10+sumofdigits(n/10));
}
int main()
{
    int a,s;
    printf("ENTER A NUMBER\n");
    scanf("%d",&a);
    s=sumofdigits(a);
    printf("THE SUM OF THE DIGITS IS %d\n",s);
    return 0;
}