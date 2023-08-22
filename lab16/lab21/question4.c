#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,sum=0;
    int (*a)[5];
    printf("ENTER NUMBER OF ROWS\n");
    scanf("%d",&n);
    a=(int(*)[5])malloc(n*5*sizeof(int));
    printf("ENTER ELEMENTS OF ARRAY\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        
    }
    printf("SUM OF THE ARRAY ELEMENTS=%d\n",sum);
}