//keep taking numbers as input until the user enter the odd number
#include<stdio.h>
int main ()
{
    int n;
    do{
        printf("enter a number:\n");
    scanf("%d",&n);
    printf("%d\n",n);
    if(n%2!=0){
        break;
    }
    }while(1);

    printf("thanks");
    return 0;

}