#include<stdio.h>
int multiply(int n,int n1);
int main()
{
    int n,n1;
    printf("ENTER 2 NUMBERS\n");
    scanf("%d" "%d",&n,&n1);
    int m=multiply(n,n1);
    printf("THE MULTIPLICATION OF THE TWO NUMBERS= %d\n",m);
}
int multiply(int n,int n1)
{
    if(n<n1)
    return multiply(n,n1);
    else if(n1!=0)
    return (n+multiply(n,n1-1));
    else 
    return 0;
}