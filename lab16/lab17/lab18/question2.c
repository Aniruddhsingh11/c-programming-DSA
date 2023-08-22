#include<stdio.h>
int main()

 {
   int b[4][3], i, j;
   for(i=0;i<4;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("enter a number ");
           scanf("%d", *(b+i)+j);

       }
   }
   for(i=0;i<4;i++)
   {
       for(j=0;j<3;j++)
       printf("%d",*(*(b+i)+j));
    printf("\n");

   }
 }