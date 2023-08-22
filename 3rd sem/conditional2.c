//conditional operstors
#include<stdio.h>
int main ()
{
    int marks;
    printf("enter the marks\n");
    scanf("%d",&marks);
    if(marks>90)
    {
        printf("the grade is O");
    }
    else if (80<marks &&  marks<90)
    {
       printf("the gdrade is E ");
    }
    else{
        printf("the student is not performing well");

    }
    return 0;
    

}