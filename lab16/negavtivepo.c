#include<stdio.h>
void main()
{
      int a[20],odd=0,even=0,neg=0,pos=0,i;
      printf("\nEnter 20 Elements : ");
      for(i=0;i<20;i++)
            scanf("%d",&a[i]);
      for(i=0;i<20;i++)
      {
            if(a[i]>=0)
                  pos++;
            else
                  neg++;
            if(a[i]%2==0)
                  even++;
            else
                  odd++;
      }
      printf("\nPositive : %d",pos);
      printf("\nNegative : %d",neg);
      printf("\nEven     : %d",even);
      printf("\nOdd      : %d",odd);
    
}