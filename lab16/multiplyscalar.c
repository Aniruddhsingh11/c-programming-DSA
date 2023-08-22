#include<stdio.h>
int main()
{
    int i,j,m[3][4],n;
    printf("ENTER  NUMBERS IN THE ARRAY\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
        scanf("%d",&m[i][j]);
        }
    }
    printf("ORIGINAL ARRAY\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("ENTER A NUMBER TO MULTIPLY\n");
    scanf("%d",&n);
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            m[i][j]=n*m[i][j];
        }
    }
    printf("ARRAY AFTER MULTIPLYING THE CONSTANT\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}