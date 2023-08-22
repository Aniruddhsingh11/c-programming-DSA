#include<stdio.h>
int main (){
    int side,length,breath,base,height;
    int r;
    printf("enter the side of square:");
    scanf("%d",&side);
    int area =side*side;
    printf("the area of square is %d\n",area);

    printf("enter the length and breath of rectangle:");
    scanf("%d %d",&length,&breath);
    area =length*breath;
    printf("the area of rectangle is %d\n",area);

    printf("enter the radius of circle:");
    scanf("%d",&r);
    area =(3.14)*r*r;
    printf("the area of circle is %d",area);

    printf("enter the area of triangle :");
    scanf("%d %d",&base,&height);
    area = (1/2)*base*height;
    printf("area of triangle is %d",area);
}