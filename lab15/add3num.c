#include<stdio.h>
int sum(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("enter the 3 numbers\n");
    scanf("%d" "%d" "%d" ,&a,&b,&c);
    int s=sum(a,b,c);
    printf("the sum of the three numbers is %d\n",s);
    return 0;

}
int sum(int a,int b,int c)
{
    int sum=0;
    sum=sum+a+b+c;
    return sum;
}