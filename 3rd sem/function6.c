#include<stdio.h>

float areasquare(float side);
float areacircle(float radius);
float arearectangle(float a,float b);
int main (){

     float side,radius ,a,b;
     printf("enter the side of square :");
     scanf("%f",&side);
     printf("the area is: %f\n",areasquare(side));
     printf("enter the radius:");
     scanf("%f",&radius);
     printf("the area of circle is :%f\n",areacircle(radius));
     printf("enter the value of a:");
     scanf("%f",&a);
     printf("enter the value opf b:");
     scanf("%f",&b);
     printf("the area of rectangle is :%f\n",arearectangle(a,b));
     return 0;
}
float areasquare(float side){

    return side*side;
}
float areacircle(float radius){

    return 3.14*radius*radius;
}
float arearectangle(float a,float b){
    return a*b;
}