#include<stdio.h>
int main()
{
    int i,j,m[20],n[20];
    printf("ENTER 20 NUMBERS\n");
    for(i=0;i<20;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=19,j=0;i>=0;i--,j++)
    {
        n[j]=m[i];
    }
    printf("NEW ARRAY\n");
    for(i=0;i<20;i++)
    {
        printf("%d ",n[i]);
    }
}