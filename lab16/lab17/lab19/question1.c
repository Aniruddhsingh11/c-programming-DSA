#include<stdio.h>
int main()
{
   int arr[5]={2,4,6,8,0};
   int i,sum=0;
   int *ptr;

   for(i=0;i<5;i++)
    
   ptr = arr;

   for(i=0;i<5;i++) 
   {
      sum = sum + *ptr;
      ptr++;
   }

   printf("\nThe sum is: %d",sum);
}