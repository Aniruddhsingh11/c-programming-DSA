// #include<stdio.h>
// int main()
// {
//     int a[100],i,n,search;
   
//     printf("Enter size of the  array : ");
//     scanf("%d", &n);
//     printf("Enter elements in array : ");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//      printf("Enter the search element: ");
//     scanf("%d", &search);
     
//     for(i=0; i<n; i++)
//     {
//         if(a[i]==search)
//         {
// 			printf("element found ");
//             return 0;		 
//         }
 
//     }
    
// 	printf("element  not  found");
// }
// #include<stdio.h>
// int main ()
// {

//     int n ;
//     printf(" enetr the value of n :"); 
//     scanf("%d",&n);
//     int fib[n];
//      fib[0] = 0;
//      fib[1] = 1;
//     for (int i =2; i<n; i++){

//         fib[i] = fib[i-1]+ fib[i-2];
//          printf("%d \t",fib[i]);
//     }
//     printf("\n");
//     return 0;
// }
// #include <stdio.h>
// void reverse(int arr[10], int n)
// {
//   int i, tmp;
//   for(i=0;i< n/2;i++)
//   {
//     tmp = arr[i];
//     arr[i] = arr[n-1-i];
//     arr[n-1-i] = tmp;
//   }
// }
// int main()
// {
//   int arr[100], i, size;
//   printf("Enter size of array: ");
//   scanf("%d",&size);
//   printf("Enter the elements of the array: ");
//   for (i = 0; i < size; i++)
//     scanf("%d", &arr[i]);
//   reverse(arr,size);
//   printf("After reversing the array: ");
//   for(i=0;i < size;i++)
//   {
//     printf("%d ", arr[i]);
//   }
//   return 0;
// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i,j,k,m,n,x;
    scanf("%d",&n);
    k=n;
    m = n+(n-1);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i<=n-1)
            {        
                if(i==0)
                {
                printf("%d ",k);
                }
                if(i>=1)
                {
                    if(j<i)
                    {
                        printf("%d ",k-j);
                    }
                    else if(j>=i && j<m-i)
                    {
                        printf("%d ",k-i);
                    }
                    else 
                    {
                        printf("%d ",(j-k+1)+1);
                    }
                }
            }
            else if(i==n-1)
            {
                if(j<n)
                {
                    printf("%d ",k-j);
                }
                else
                {
                    printf("%d ",(j-k+1)+1);
                }
            }
            else if(i>=n)
            {
                x = m-i-1;
                if(i==m)
                {
                printf("%d ",k);
                }
                if(j<x)
                {
                    printf("%d ",k-j);
                }
                else if(j>=x && j<m-x)
                {
                    printf("%d ",k-x);
                }
                else 
                {
                    printf("%d ",(j-k+1)+1);
                }    
            }
        }
        printf("\n");
    }
}
