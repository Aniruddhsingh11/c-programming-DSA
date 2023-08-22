#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,slope;
    printf("enter the value x1,y1\n");
    scanf("%d %d",&x1,&y1);
    printf("enter the value of x2,y2\n");
    scanf("%d %d",&x2,&y2);
    slope=(y2-y1/x2-x1);
    printf("the slope of line is %d",slope,x1,y1,x2,y2);
    return 0;
}