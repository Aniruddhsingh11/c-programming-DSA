#include<stdio.h>
int main()
{
    float c,f;
    printf("enter the value of fahrenheit value \n");
    scanf("%f",&f);
    c=((f-32)/1.8);
    printf("centigrade temprature is %f",c);
    return 0;
}