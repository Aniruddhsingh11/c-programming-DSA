// #include<stdio.h>
// int main (){

//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;

   
    
//     printf("%d",**pptr);
// }
// call by refrence 
// #include<stdio.h>
// int swap(int *a,int *b);
// int main (){
//     int x;
//     int y;
//     printf("enter the value of x:");
//     scanf("%d",&x);
//     printf("enter the value of y");
//     scanf("%d",&y);
//     swap(&x, &y);
//     printf(" x= %d & y= %d\n",x,y);
//     return 0;
// }
// int swap (int *a,int *b){


//     int t = *a;
//     *a = *b;
//     *b = t ;
    
// }
// WRITE A  FUNCTION TO CALCULATE SUM AND AVERAGE OF TWON NUMBBER 

// #include<stdio.h>
// void dowork (int a ,int b,int *sum,int *prod,int *average);
// int main (){

// int a,b,sum,prod,average;
// printf("enter the value of a and b:");
// scanf("%d %d",&a,&b);
// dowork(a,b,&sum,&prod,&average);
// printf("sum =%d \nprod = %d\n  average = %d\n",sum ,prod,average);
//     return 0;
// }
// void dowork(int a, int b,int *sum,int *prod,int *average){

//         *sum = a+b;
//            *prod = a*b;
//        *average = (a+b)/2;

// }
// practise 

// #include<stdio.h>
// int main (){

//     int a,b,*ptr1 =&a , *ptr2 =&b;

//     printf("enter the value of num1 first:");
//     scanf("%d",ptr1);
//     printf("enter the value of num2 :");
//     scanf("%d",ptr2);

//     if (*ptr1>*ptr2){

//         printf("\nthis is maximum number  %d",*ptr1);
//     }
//     else
//     {

//         printf("\n\n this is maximum %d ",*ptr2);
//     }
//     return 0;
// }
// reverse a array 

// 
#include <stdio.h>

int main()
{
    char alph[27];
    int x;
    char *ptr;
 	printf("\n\n Pointer : Print all the alphabets:\n"); 
    ptr = alph;     

    for(x=0;x<26;x++)
    {
        *ptr=x+'A';
        ptr++;
    }
    ptr = alph;

printf(" The Alphabets are : \n");
    for(x=0;x<26;x++)
    {
       printf(" %c ", *ptr);
        ptr++;
    }
    printf("\n\n");
    return(0);
}
