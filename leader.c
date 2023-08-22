#include<stdio.h>
int main()
{
    int b;
    b=count(10);
    printf("THE NUMBER OF LEADERS ARE %d\n",b);
}
#include<stdio.h>
int count(int n)
{
    int max=0,i,c=0,a;
    for(i=0;i<n;i++)
    {
        printf("ENTER NEXT NUMBER\n");
        scanf("%d",&a);
        if(a>max)
        {
        max=a;
        c++;
        printf("%d IS A LEADER\n",max);
        }
    }
    return c;
}