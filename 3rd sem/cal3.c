#include <stdio.h>
int main()
{
    int i,n,k,a,j,y,z=1;char day[10];
    printf("enter the month number\n");
    scanf("%d",&n);
    printf("enter the day name\n");
    scanf("%s",day);
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
    a=31;
    else if(n==2)
    a=28;
    else a=30;
    k=a/7;
    if(day=="tuesday")
    y=3;
    else if(day=="monday")
    y=2;
    else if(day=="wednesday")
    y=4;
    else if(day=="sunday")
    y=1;
    else if(day=="thursday")
    y=5;
    else if(day=="friday")
    y=6;
    else if(day=="saturday")
    y=7;
    int calendar[k+1][7];
    for(i=1;i<=k+1;i++)
    {
        for(j=1;j<8;j++)
        {
            if(j<y)
            printf("*");
            else 
            {
                if (z<=a)
            {
                calendar[i][j]=z;
                printf("%d    ",calendar[i][j]);
                z++;
            }
            }
        }
        printf("\n");
    }
}