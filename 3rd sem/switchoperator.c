//SWITCH CASE STATEMENTS
#include<stdio.h>
int main ()
{
    int day;
    printf("enter the day(1-7)\n");
    scanf("%d",&day);
    switch (day)
    {
        case 1: printf("the day is monday\n");
        break;
        case 2: printf("the day is tuesday\n");
        break;
        case 3: printf("thr day is wednesday \n");
        break;
        case 4: printf("the day is thrusday\n");
        break;
        case 5: printf("the day is friday\n");
        break;
        case 6: printf("the day is saturday\n");
        break;
        case 7: printf("the day is sumday\n");
        break;
        default : printf("this is not a valid day \n");
    }
    return 0;
}
   