// percentage using recursion
#include<stdio.h>
float totalpercentage(float maths,float science,float eng);
int main (){
    float maths,science,eng;
    printf("enter maths marks:");
    scanf("%f",&maths);
    printf("enter the marks of science:");
    scanf("%f",&science);
    printf("enter the marks of eng:");
    scanf("%f",&eng);
    printf("the percentage is %f",totalpercentage(maths,science,eng));

    return 0;
}
float totalpercentage(float maths,float science,float eng){

    return ((maths+science+eng)/3);
}
