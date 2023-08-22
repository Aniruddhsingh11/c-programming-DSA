#include<stdio.h>
void sum(int n)
{
    int i,f;
    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("THE FACTORIAL OF THE NUMBER IS %d",f);
}
int main()
{
    int a;
    printf("ENTER AN INTEGER\n");
    scanf("%d",&a);
    sum(a);

    return 0;
}