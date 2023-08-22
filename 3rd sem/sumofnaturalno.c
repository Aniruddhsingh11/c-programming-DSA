#include<stdio.h>
int main ()
{
    int n,sum=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(int i=1,j=n;i<=n && j>=1;i++,j--)
    {
        sum=sum +i;
  printf("%d\n",j);
    }
    printf("sum is %d",sum);
}
