#include<stdio.h>
int main()
{
    int a,b,c,next,num;
    printf("enter any number\n");
    scanf("%d",&num);  
    if((num==0)||(num==1))
    printf("\n%d is a fabonacci",num);
    else
    {
        a=0;
        b=1;
        c=a+b;
        while(c<num)
        {
            a=b;
            b=c;
            c=a+b;
        }
        if(c==num)
        printf("\n %d is not fabonacci",num);
    }
    return 0;
}