#include<stdio.h>
int sumofdigit(int a,int b);
int main (){
    int a,b;
printf("enter a number a and  : ");
scanf("%d,",&a);
printf("enter a second number:");
scanf("%d",&b);
printf("the sum is %d",sumofdigit( a,b));

return 0;

}
int sumofdigit(int a,int b){
  return a+b;

}