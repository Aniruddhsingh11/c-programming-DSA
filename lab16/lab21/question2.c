#include<stdio.h>
enum week{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
int main()
{
    enum week today;
    today=FRIDAY;
    printf("%d \n",today+1);
    return 0;
}