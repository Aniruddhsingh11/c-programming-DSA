#include<stdio.h>
int main (){

    int n,remiander,reverse=0,temp;
    printf("enter the number :");
    scanf("%d",&n);
    temp =n;
    while(n>0){
        
    
    remiander =n%10;
    reverse= (reverse*10) +remiander;
    n =n/10;
    }
    if(temp==reverse){
        printf("the number is palindrome:");

    }
    else {

        printf("the no is not a palindrome:");
    }
}