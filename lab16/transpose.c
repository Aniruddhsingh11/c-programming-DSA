#include <stdio.h>
int main()
{
    int b[4][4],t,i,n,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter element for [%d][%d]\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("ORIGINAL ARRAY:\n");
    for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                printf("%d",b[i][j]);
            }
            printf("\n");
        }
        printf("TRANSPOSE ARRAY:\n");
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                printf("%d",b[j][i]);
            }
            printf("\n");
        }
}