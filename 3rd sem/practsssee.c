//ARRAY 
// ADDITION OF TWO NUMBERS
// #include<stdio.h>
// int main (){

//     int a[100],b[100],c[100],n,i;
//     printf("enter the value of array a:");
//     for(i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("enter the value array of b:");
//     for(i=0;i<5;i++){

//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<5;i++){

//         c[i]=a[i]+b[i];
//     }
//     printf("the sum of two arrays is :");
//     for(i=0;i<5;i++){

//         printf("%d\t",c[i]);
//     }
//     return 0;

// }
// WRITE A PROGRAM TO ACCEPT 5 NUMBERS FROM THE USER AND PRINT THEN BACK
// #include<stdio.h>
// int main (){

//     int num[100],i;

//     printf("enter the number :");
//     for(i=0;i<6;i++){

//         scanf("%d",&num[i]);
//     }
//     printf("the number in reverse order :");
//     for(i=5;i>=0;i--){

//         printf("\n %d\t",num[i]);
//     }
//     return 0;
// }
//WRITE A PROGRAM TO SEARCH AN ELEMENTS 

// #include<stdio.h>
// int main (){

//     int a[100],n,i,item;

//     printf("enter the size of array :");
//     scanf("%d",&n);
//     printf("enter the elemets in array :");
//     for(i=0;i<n;i++){

//         scanf("%d",&a[i]);
//     }
//     printf("enter the number to be searched :");
//     scanf("%d",&item);
//     for(i=0;i<n;i++){

//         if(a[i]==item){

//             printf("\n the element is found in position %d",i+1);
//             break;
//         }
//     }
//     if(i==n){

//         printf("\n the elememt is not  found:");
//     }
// }
// SEARCH AN ELEMENT USING BINARY SEARCH 

#include<stdio.h>
int main (){

    int num[100],n,i,low,mid,high,item;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the element in array:");
    for(i=0;i<n;i++){

        scanf("%d",&num[i]);
    }
    printf("enter the elemet to be searched:");
    scanf("%d",&item);
    low =0 ,high=n-1;
    mid = (low + high)/2;
    while(low<high && num[mid]!=item){

        if(num[mid]>item){

            high = mid -1;
        }
        else{

            low = mid +1;
        }
        mid = (low +high)/2;
    }
    if(num[mid]==item){

        printf("\n the element found to be at position%d",mid +1);
    }
    else {

        printf("\n the element is not found ");
    }
}