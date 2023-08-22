#include <stdio.h>
int main()
{
    int n,i,j,m;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];int b[n+1];
    printf("enter no. to insert in the array\n");
    scanf("%d",m);
    for(i=0;i<n;i++)
    {
        printf("\nenter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n+1;i++)
    {
        if(i<n)
        b[i]=a[i];
        else
        b[i]=m;
    }
    for(i=0;i<n+1;i++)
    {
        printf("enter element %d:",b[i]);
    }
}