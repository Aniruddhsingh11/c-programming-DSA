#include<stdio.h>
int main()
{
    int a=10,b=40;
    int c=0;
    c=a&b;
    printf("VALUE OF C IS %d\n",c);
    c=a|b;
    printf("VALUE OF C IS %d\n",c);
    c=a^b;
    printf("VALUE OF C IS %d\n",c);
    c=a>>b;
    printf("VALUE OF C IS %d\n",c);
    c=a<<b;
    printf("VALUE OF C IS %d\n",c);
}