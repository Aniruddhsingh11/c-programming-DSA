#include<stdio.h>
int main()
{
    int i,j,a[4][5],b[4]={0,0,0,0};
    printf("ENTER ARRAY ELEMENTS\n");
    for (i = 0; i < 4; i++) 
    {
       for (j = 0; j < 5; j++) 
       {
          scanf("%d ", *(a + i)+j);
       }
    }
    int(*pa)[5],*pb;
    pa=a;
    pb=b;
    for (i = 0; i < 4; i++) 
    {
       for (j = 0; j < 5; j++) 
       {
           b[i]=b[i]+a[i][j];
       }
    }
    for (i = 0; i < 4; i++) 
    {
       for (j = 0; j < 5; j++) 
       {
           printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    printf("SUM OF ROWS IS\n");
    for (i = 0; i < 4; i++) 
    {
        printf("SUM OF %d ROW IS %d ",i+1,b[i]);
        printf("\n");
    }
}