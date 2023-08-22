#include<stdio.h>
int main ()
{
    int n,reverse = 0,remainder,t;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(t=n;n!=0;n=n/10)
{
remainder = n%10;
reverse   = reverse*10 + remainder;

}
printf("reverse number =%d",reverse);
return 0;
}
