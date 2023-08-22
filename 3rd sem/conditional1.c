//conditional statement
#include<stdio.h>
int main ()
{
    int age;
    printf("enter the age\n ");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("the person is adult\n");
        printf("they can vote\n");
        printf("the can drive\n");
    }
    else{
        printf("the person is not adult");
    }
    return 0;


    }

    
