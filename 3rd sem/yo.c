#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j;
    scanf("%d", &n);
  	for(i=1;i<n+1;i++)
      {
          for(j=1;j<n+1;j++)
          {
            if(i<j&&j<=n)
            printf("%d",n+1-i);
            else if(i>=j&&i<=n)
            printf("%d",n+1-j);
          }
          for(j=n-1;j>=1;j--)
          {
            if(i<j&&j<=n)
            printf("%d",n+1-i);
            else if(i>=j&&i<=n)
            printf("%d",n+1-j);
          }
          printf("\n");
      }
    for(i=n-1;i>=1;i--)
      {
        for(j=1;j<n+1;j++)
          {
            if(i<j&&j<=n)
            printf("%d",n+1-i);
            else if(i>=j&&i<=n)
            printf("%d",n+1-j);
          }
          for(j=n-1;j>=1;j--)
          {
            if(i<j&&j<=n)
            printf("%d",n+1-i);
            else if(i>=j&&i<=n)
            printf("%d",n+1-j);
          }
          printf("\n");
      }
    return 0;
}