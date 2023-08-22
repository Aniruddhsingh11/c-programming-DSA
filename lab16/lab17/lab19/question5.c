#include<stdio.h>
void add_row(int (*pa)[5],int *pb)
{
    int i,j;
    for (i = 0; i < 4; i++) 
    {
       for (j = 0; j < 5; j++) 
       {
           pb[i]=pb[i]+pa[i][j];
       }
    }
    printf("SUM OF ROWS IS\n");
    for (i = 0; i < 4; i++) 
    {
        printf("SUM OF %d ROW IS %d ",i+1,pb[i]);
        printf("\n");
    }
}
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
    add_row(pa,pb);
}