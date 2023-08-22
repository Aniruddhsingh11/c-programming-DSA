// ARRAY PRACTISE 
// count odd numbes
// #include<stdio.h>
// int countodd(int arr[],int n);
// int main (){
//     int arr[] = {1,2,3,4,5,6,7,8};
//     printf("%d",countodd(arr,8));
//     return 0;
// }
// int countodd(int arr[],int n){

//       int count =0;
//       for (int i =0;i<n;i++){

//         if (arr[i]%2!=0){

//             count++;


//         }
//       }
//       return count ;
// }
// REVERSE AN ARRAY 
// #include<stdio.h>
// int reverse(int arr[],int n);
// void printarray (int arr[],int n);
// int main (){
// int arr[] = {1,2,3,4,5,6,7};

// reverse(arr,7);
// printarray(arr,7);   
//     return 0;
// }
// void printarray (int arr[],int n){

// for(int i =0; i<n;i++){

//     printf("%d \t",arr[i]);
// }
// printf("\n");
// }
// int reverse(int arr[],int n){


//     for(int i =0;i<n/2;i++){


//         int firstvalue =arr[i];
//         int secondvalue = arr[n-i-1];
//         arr[i] = secondvalue ;
//         arr[n-i-1] = firstvalue;
//     }
// }
// n fibonacci number
#include<stdio.h>
int main ()
{

    int n ;
    printf(" enetr the value of n (n>2):");
    scanf("%d",&n);
    int fib[n];
     fib[0] = 0;
     fib[1] = 1;
    for (int i =2; i<n; i++){

        fib[i] = fib[i-1]+ fib[i-2];
         printf("%d \t",fib[i]);
    }
    printf("\n");
    return 0;
    
// }
// how many times a number occurs
#include<stdio.h>
int main (){

    int arr[100],n,count=0;
    printf("enter the  elements \n:");
    for(int i =0;i<10;i++){

        scanf("%d",&arr[i]);
    }
    printf("enter the element which are in check condition :");
    scanf("%d",&n);
    for (int i =0 ;i<10;i++){

        if(arr[i]==n){

              count ++;
        }
    }
    printf("\n count =%d",count);
    return 0;

   }
// #include<stdio.h>
// int main (){

//     int arr[100],n;
//     printf("enter the array elements:");
//     scanf("%d",&n);
//     printf("enter the elements in an array:");
//     for(int i=0;i<n;i++){

//         scanf("%d",&arr[i]);
//     }
//    int largest =arr[0];
//     for (int i=0;i<n;i++){

//         if(largest<arr[i]){

//            largest =arr[i];
//         }
//     }
//     printf("the largest number is =%d",largest);
//     return 0;
// }
// #include<stdio.h>
// int main(){

//     int arr[100],n,count=0;
//     printf("enter the elements :");
//     for(int i=0;i<20;i++){

//         scanf("%d",&arr[i]);
//     }
//     printf("enter the number which  we check ");
//     scanf("%d",&n);
//     for(int i =0;i<20;i++){

//         if(n==arr[i]){

//          count ++;

//         }
//     }
//     printf("\n count =%d",count);
//     return 0;
// }
//
// #include<stdio.h>
// int reverse(int arr[],int n);
// void printarray(int arr[],int n);
// int main(){
//     int arr[]={1,2,3,4,5,6};
    // reverse(arr,6);
//     printarray(arr,7);
//     return 0;
// }
// int reverse(int arr[],int n){

//     for(int i=0;i<n/2;i++){

//         int firstvalue =arr[i];
//         int secondvalue =arr[n-i-1];

//         arr[n-i-1] =firstvalue;
//         arr[i] = secondvalue;
//     }
    
// }
// void printarray(int arr[],int n){

//     for(int i =0;i<n;i++){

//         printf("%d \t",arr[i]);

//     }
//     printf("\n");
// }
// #include<stdio.h>
// int countodd(int arr[],int n);
// int main(){
//     int arr[] ={1,2,3,4,5,6,7,8,9};
//     printf("%d\t",countodd(arr,9));
//     return 0;
// }
// int countodd(int arr[],int n){


//    int count=0;
//    for(int i=0;i<n;i++){

//      if(arr[i]%2!=0){

//         count ++;
//      }

//    }
//    return count;


// }

// #include<stdio.h>
// int main (){

//     int n;
//     printf("enter the value of n (n>2):");
//     scanf("%d",&n);
//     int fib[n];
//     fib[0] =0;
//     fib[1] =1;
//     for(int i=2;i<n;i++){
//  fib[i] = fib[i-1] + fib[i-2];
//  printf("%d\t",fib[i]);
//     }
//     printf("\n");   
//     return 0;
// }
// #include<stdio.h>
// int main (){

//     int n;
//     printf("enter the value of n (n>2)");
//     scanf("%d",&n);
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
//     for(int i=2;i<n;i++){

//         fib[i] = fib[i-1] + fib[i-2];
//         printf("%d\t",fib[i]);
//     }
//     printf("\n");
// }
// #include<stdio.h>
// int main (){

//     int arr[100], n,count=0;
//     printf("enter the elements:");
//     for(int i=0;i<10;i++){

//         scanf("%d",&arr[i]);
//     }
//     printf("enter the elements which we check");
//     scanf("%d",&n);
//     for (int i=0;i<10;i++){

//         if(arr[i]==n){
//             count ++;
//         }
       
//     }
//      printf("\ncount=%d\n",count);


// }
// #include<stdio.h>
// int main (){

//     int num[100] ,n;
//     printf("enter the size of array:");
//     scanf("%d",&n);
//     printf("enter the elements in the array:");
//     for (int i=0;i<n;i++){

//         scanf("%d",&num[i]);

//     }
//     for(int i=0;i<n;i++){

//         printf("%d\n",num[i]);
//     }
// }
// #include<stdio.h>
// int main (){

//     int num[5],num2[5],num3[5];
 
//  printf("enter the elements of array\n");
//  for(int i=0;i<5;i++)
//  {
//     scanf("%d",&num[i]);
//  }
//  printf("enter the value of array num2:");
//  for(int i=0;i<5;i++)
//  {
//     scanf("%d",&num2[i]);
//  }
//  printf("the additon array is num3[5]");
//  for(int i=0;i<5;i++){

//     num3[i] =num[i] + num2[i];
//  }
//  printf("the final add result is :");
//  for(int i=0;i<5;i++){

//     printf("%d\t",num3[i]);
//  }


// }
// #include<stdio.h>
// int reverse(int arr[n],int n);
// void printarray(int arr[n],int n);
// int main (){
//     #include <stdio.h>

// void main() {
//    int m1[10][10], m2[10][10];
//   int i, j, m, n, a, b, c, p, q, r;
//   printf("Enter the order of the matrix\n");
//   scanf("%d * %d", & m, & n);
//   printf("Enter the coefficients of the matrix\n");
//   for (i = 0; i < m; ++i) {
//     for (j = 0; j < n; ++j) {
//       scanf("%d", & m1[i][j]);
//       m2[i][j] = m1[i][j];
//     }
//   }
//   printf("Enter the numbers of two rows to be exchanged \n");
//   scanf("%d %d", & a, & b);
//   for (i = 0; i < m; ++i) {
//     c = m1[a - 1][i]; 
//     m1[a - 1][i] = m1[b - 1][i];
//     m1[b - 1][i] = c;
//   }
  
  
//   printf("The matrix after interchanging the two rows(in the original matrix)\n");
//   for (i = 0; i < m; ++i) {
//     for (j = 0; j < n; ++j) {
//       printf(" %d", m1[i][j]);
//     }
//     printf("\n");
//   }
  
// }
// #include <stdio.h>
// void exchange(int n,int *p);
// int main()
// {
//     int i,j,n;
//     printf("enter size of matrix n*n\n");
//     scanf("%d",&n);
//     int a[n][n];
//     int *p=&a;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("enter element [%d][%d]:",i,j);
//             scanf("%d",p+i+j);
//         }
//     }
//     printf("original matrix\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d    ",(*(p+i)+j));
//         }
//         printf("\n");
//     }
//     void swapcolumns();
//     printf("rearranged matrix\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d    ",(*(p+i)+j));
//         }
//         printf("\n");
//     }

// }
// void swapColumns(int a[][6],int row,int col,int fswap,int sswap)
//  {
//     int i;
//     int *px,*temp;
//     px=a;
//    for (i=0;i<row ;i++) 
//    {   
//       temp=*(px i*col+fswap);
//      *(px i*col+fswap) = *(px i*col+sswap);
//      *(px i*col+sswap)=temp; 
//    }  
//   }
//   for (i=0;i<row ;i++) 
//    {   
//       temp=*(px i*col+firstswap);
//      *(px i*col+firstswap) = *(px i*col+secondswap);
//      *(px i*col+secondswap)=temp; 
//    }  
//   }
// #include <stdio.h>
// void exchange(int n,int *p);
// int main()
// {
//     int i,j,n;
//     printf("enter size of matrix n*n\n");
//     scanf("%d",&n);
//     int a[n][n];
//     int *p=&a[n][n];
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("enter element [%d][%d]:",i,j);
//             scanf("%d",p+i+j);
//         }
//     }
//     printf("original matrix\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d    ",(*(p+i)+j));
//         }
//         printf("\n");
//     }
//     exchange(n,*p);
//     printf("rearranged matrix\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d    ",(*(p+i)+j));
//         }
//         printf("\n");
//     }

// }
// void exchange(int n,int *p)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n/2;j++)
//         {
//             int k=*(p+i)+j;
//            ((p+i)+j)=(p+i)+(n-j-1);
//             *(p+i)+(n-j-1)=k;
//         }
//     }

// }
// #include<stdio.h>
// int rverse(int arr[],int n);
// void printarray(int arr[],int n);
// int  main (){


//     int arr[] = {1,2,3,4,5,6,7};
//     reverse(arr,7);
//     printarray(arr,7);
//     return 0;
// }
// int reverse(int arr[],int n){


//     for(int i =0;i<n/2;i++){
  
//         int firstvalue =arr[i];
//         int secondvalue =arr[n-i-1];
//         arr[i] = secondvalue;
//         arr[n-i-1] = firstvalue;
//      }
//  }
//     void printarray(int arr[],int n){

//         for(int i=0;i<n;i++){

//             printf("%d\t",arr[i]);
//         }
//     }
#include<stdio.h>
int main (){

    int arr[100],n,elements,count=0;
    printf("enter the elemnets of array \n");
    for(int i=0;i<10;i++){

        scanf("%d",&arr[i]);
    }
    printf("enter the search elements");
    scanf("%d",&elements);
    for(int i=0;i<10;i++){
        if(arr[i]==elements){
            count ++;
printf("\n count =%d",count);
}
            
        }
    }
    