#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("ENTER NUMBER OF ELEMENTS\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("ENTER ELEMENTS OF ARRAY\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum += *(ptr+i);
    }
    printf("Sum=%d",sum);
    free(ptr);
    return 0;

}