#include<stdio.h>
int larges(int *a,int *b,int n)
{
    int i,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        s1=*(a+i);
        s2=*(b+i);
    }
    if(s1==s2)
    return 0;
    else if(s1>s2)
    return 1;
    else 
    return 2;
}
int main()
{
    int x[10],y[5],g;
    printf("ENTER ARRAY ELEMENTS\n");
    for (int i = 0; i < 10; ++i)
        scanf("%d", x + i);
    printf("ENTER ARRAY ELEMENTS\n");
    for (int i = 0; i < 5; ++i)
        scanf("%d", y + i);    
    g=larges(x,y,5);
    
    if(g==0)
    printf("SUM OF ARRRAYS ARE EQUAL\n");
    else if(g==1)
    printf("SUM OF FIRST ARRAY IS LARGER \n");
    else
    printf("SUM OF SECOND ARRAY IS LARGER \n");
}