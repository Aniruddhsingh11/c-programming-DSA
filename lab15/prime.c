#include<stdio.h>
int checkPrime(int number)
{
  int count = 0;

  for(int i=2; i<=number/2; i++)
  {
     if(number%i == 0)
     {
       count=1;
       break;
     }
  }

  if(number == 1) count = 1;

  return count;
}

int main()
{
  int m, n;

  printf("Enter min and max value of the range: ");
  scanf("%d %d",&m, &n);

  printf("Prime numbers from %d to %d are: ", m, n);
  for(int i=m; i<=n; i++)
  {
    if(checkPrime(i) == 0)
    printf("%d\t",i);
  }

  return 0;
}