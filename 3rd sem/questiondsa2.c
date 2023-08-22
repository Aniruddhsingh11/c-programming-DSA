#include <stdio.h>
void sum(int a  , int b){
    int sum  = a+b;
    printf("\n The sum is %d",sum);
}
void delete(int a  , int b){
    int del  = a-b;
    printf("\n The delete is %d",del);
}
void multiply(int a  , int b){
    int mul = a*b;
    printf("\n The multiplication is %d",mul);
}
void  division(int a , int b){
    int divi = a/b;
    printf("\n The division is %d",divi);
}
int main()
{
   int a  , b; 
   
   for(int i =0;i<7;i++){
       printf("\nEnter the 1st num:");
   scanf("%d",&a);
    printf("\nEnter the 2nd num:");
   scanf("%d",&b);
   sum(a,b);
   delete(a,b);
   multiply(a,b);
   division(a,b);
   }
   
    return 0;
}