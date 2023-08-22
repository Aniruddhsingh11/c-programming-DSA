// #include<stdio.h>
// int main (){

//     int n,i,fact=1;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(i=1;i<=n;++i){

//        fact =fact*i;
       
//     }
//     printf("factorial of  %d is %d",n,fact);
// }

#include<stdio.h>
int main(){
   int number,remainder,total=0,temp;
   printf("enter the number=");
   scanf("%d",&number);
   temp=number;
   while(number>0){
      remainder=number%10;
      total=total+(remainder*remainder*remainder);
      number=number/10;
   }
   if(temp==total)
      printf("This number is Armstrong number");
   else
      printf("This number is not Armstrong number");
   return 0;
}