// #include<stdio.h>
// void printtable(int n);
// int main (){
//     int n ;
//     printf("enter a number :");
//     scanf("%d",&n);
//     printtable(n);


//     return 0;
// }
// void printtable(int n){

//     for(int i=1;i<=10;i++){

//         printf("%d\n",i*n);

//     }
// }
// #include<stdio.h>
// int sum (int n);
// int main (){
//     int n;
//     printf("enter a natural number:");
//     scanf("%d",&n);
//     printf("sum of these number %d",sum (n));
    

//     return 0;
// }
// int sum (int n){

// if (n==1){
//     return 1;
// }
//     int sum1mN = sum(n-1);
//     int sumN = sum(n-1)+n;
//     return sumN;
// }
// FACTORIAL USING RECURSION 
// #include<stdio.h>
// int factorial(int n);
// int main (){
// int n;
// printf("enter the number :");
// scanf("%d",&n);
// printf("the factorial is %d",factorial(n));
//     return 0;
// }
// int factorial (int n){

//     if(n==1){

//         return 1;
//     }
//     int fact1mN =factorial(n-1);
//     int factN = factorial(n-1)*n;
//     return factN;
// }
// #include<stdio.h>
// float converttemp(float n);
// int main (){
//     float n;
//     printf("enter the n value");
//     scanf("%f",&n);
//     float fahr = converttemp(n);
//     printf("%f",fahr);

//     return 0;
// }
// float converttemp(float n){

//     float fahr = n* (1.8)+32;
//     return fahr;
// }
// PERCENTAGE OF A STUDENT USING RECURSION;
// #include<stdio.h>
// float calculate_percen(float math,float eng,float science);
// int main (){
//     float math,eng,science;
//     printf("enter the marks of maths:");
//     scanf("%f",&math);
//     printf("enter the marks of eng :");
//     scanf("%f",&eng);
//     printf("enter the marks of science :");
//     scanf("%f",&science);
//     float percen = calculate_percen(math,eng,science);
//     printf("th percen is %f",percen);
//     return 0;
// }
// float calculate_percen(float math,float eng, float science){

//         float percen = (math+eng+science)/3;
//         return percen;

// }
//fibonacci series by using recursion 
#include<stdio.h>
int fib(int n);
int main (){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    fib(n);
    return 0;
}
int fib(int n){

if(n==0 || n==1){
    if(n==0){

        return 0;
    }
    if (n==1){

        return 1;
    }

}  
int fibNm1= fib(n-1); 
int fibNm2 = fib(n-2);
    int fibN = fibNm1 +fibNm2;
    printf("fib of %d\n is %d\n",n,fibN);
    return fibN;
// }
// using math.h library to using the function of sqrt:
// #include<stdio.h>
// #include<math.h>

// int main (){
// int number,squareroot;

// printf("enter the number :");
// scanf("%d",&number);
// squareroot = sqrt(number);
// printf("square root of number is %d = %d",number,squareroot);
//     return 0;
// }


    
