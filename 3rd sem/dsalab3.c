#include<stdio.h>
int main(){

    int i,fib[10];
    fib[0] = 0;
    fib [1] = 1;
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=2; i<n;i++){

        fib[i] = fib[i-1] + fib[i-2];
        
    }
    printf("the series is :");

    for(i=0;i<n;i++){

        printf("%d\n",fib[i]);
    }
}