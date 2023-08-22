// write a function to convert celsius to fahrenheit
#include<stdio.h>
float celsius(float n);
int main (){
    float fahrenheit=celsius(24);
    printf("the fahrenheit is %f",fahrenheit);
    return 0;
}
float celsius(float n){

    float fahrenheit= n*(9.0/5.0)+32;
return fahrenheit;
    
}