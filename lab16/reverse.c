#include<stdio.h>  
#define N 5  
int main()  
{  
    int a[N], b[N], i, j;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    printf("\n\nCopying elements from array a to b, in reverse order\n");  
    for(i = N - 1, j = 0; i >= 0; i--, j++)  
        b[j] = a[i];  
  
    printf("\nOriginal(a[%d])  -->  Copy(b[%d])\n", N, N);  
    for(i = 0; i < N; i++)  
        printf("%4d\t\t-->%6d\n", a[i], b[i]);  
  
    return 0;  
}  