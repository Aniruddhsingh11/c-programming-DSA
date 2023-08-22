#include <stdio.h>
#define pi 3.18
void area();
int main()
{
    area();

    return 0;
}
   void area()
   {  
       float ar, rad;
       printf("\n ENTER THE RADIUS OF THE CIRCLE:");
       scanf("%f",&rad);
       
       ar=pi*rad*rad;
       
       printf("\n THE REQUIRED AREA IS: %f",ar);
   }