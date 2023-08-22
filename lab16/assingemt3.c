#include<stdio.h>
int main()
{
    int i,j,m[4][4],n[4][4],s[4][4];
    printf("ENTER  NUMBERS IN TWO ARRAYS\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
        scanf("%d",&m[i][j]);
        }
    }
    printf("FIRST ARRAY\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
        printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
        scanf("%d",&n[i][j]);
        }
    }
    printf("SECOND ARRAY\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
        printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
        s[i][j]=n[i][j]+m[i][j];
        }
    }
    printf("ARRAY AFTER ADDITION\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
        printf("%d ",s[i][j]);
        }
        printf("\n");
    }
}