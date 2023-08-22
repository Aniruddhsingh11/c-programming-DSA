//factorial by using recursion
#include<stdio.h>
int factorial(int n);
int main (){
      printf("the factorial is %d",factorial(5));
    return 0;
}
int factorial(int n){
    if(n==0){
        return 1;
    }

int factNm1= factorial(n-1);
int factN=factNm1*n;
}