//#include<stdio.h>
//int main (){
   // int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     if(0<n){

//         printf("the number is natural number");
//     }
//     else{
//   printf("the number is not a natural number ");
//     }
// } //
// PATTERN PROHRAM
// #include<stdio.h>
// int main (){


//     for(int i=1;i<=6;i++){

//         for(int j=1;j<=5;j++){

//             printf("*");
//         }
//         printf("\n");
//     }
    
// // }
//PRIME NUMBER OR NOT PROGRAM
// #include<stdio.h>
// int main()
// {
//     int n,i,c=0;
//     printf("enter the number :");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         if(n%i==0){
//             c++;
//         }
//     }
//     if(c==2){

//         printf("the number is prime number ");
//     }
//     else {
//         printf("the number is no a prime number ");
//    
 }
#include <stdio.h>
int main()
{
    int position, i, n, value,ch, arr[100];
    printf("C Program to insert element at end of Array\n");
    printf("First enter number of elements you want in Array\n");
    scanf("%d", &n);
    arr[n];
   for(i = 0; i < n; i++)
    {
        printf("Please give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Let's Insert Element at end \n ");
    printf("Please give a number to insert at end \n");
    scanf("%d", &value);
    arr[n] = value;
    printf("Element %d is inserted at %d index \n",value,n);
    printf("New Array is \n ");
     
    for(i = 0; i < n+1; i++)
    {
       printf("%d \t",arr[i]);
    }
}