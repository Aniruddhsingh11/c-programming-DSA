
#include<stdio.h>

void main()
{
	int a, b, c;
	
	printf("Enter three numbers\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b)
    {
        if(a > c)
            printf("a: %d is largest\n", a);
        else
            printf("b: %d is largest\n", b);
    }
    else if(b > c)
        printf("b: %d is largest\n", b);
    else
        printf("c: %d is largest\n", c);
}


    

