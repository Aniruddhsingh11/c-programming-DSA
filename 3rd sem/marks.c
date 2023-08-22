#include <stdio.h>
int main()
{
    int d,m,y,dd,mm,yy,dy,dyy;
    printf("enter brith date in dd/mm/yyyy\n");
    scanf("%d%d%d",&d,&m,&y);
    printf("enter current dd/mm/yyyy\n");
    scanf("%d%d%d",&dd,&mm,&yy);
    int year=yy-y-1;int day,month;
    if(m>mm)
    month=mm;
    else 
     {
        month=mm-m-1;year+=1;
     }
    if(mm==1||mm==3||mm==5||mm==7||mm==8|mm==10||mm==12)
    dy=31;
    else if(mm==2&&yy%4==0)
    dy=29;
    else if(mm==2&&yy%4!=0)
    dy=28;
    else
    dy=30;
    if(m==1||m==3||m==5||m==7||m==8|m==10||m==12)
    dyy=31;
    else if(m==2&&yy%4==0)
    dyy=29;
    else if(m==2&&yy%4!=0)
    dyy=28;
    else
    dyy=30;
    if(m>mm)
    day=dy+d-dd;
    else {day=dyy-d+dd;}
    if(day>=dy)
    {
        month+=1;
        day=day-dy;
    }
    if(month>=12)
    {
        year+=1;
        month-=12;
    }
    printf("You are %ddays  %dmonths  %dyears old",day,month,year);
    if(day==0&&month==0)
    printf("\nHAPPY BIRTHDAY!!");
}