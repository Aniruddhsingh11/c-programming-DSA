#include<stdio.h>
int main (){
    int n ,reverse = 0 ,remainder;
    printf("enter a number:");
    scanf("%d",&n);
    while(n !=  0){
        remainder  = n   %  10;
     reverse= reverse* 10+ remainder;
     n/=10;
    }
    printf("the revrse order is %d",reverse);
    return 0;
}
