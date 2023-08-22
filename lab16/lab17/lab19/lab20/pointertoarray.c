#include<stdio.h>
struct book
{
    char name[20];
    float price;
    int pages;
};
struct book *ptr,b[5];
int main()
{
    int i;
    ptr=b;
    for ( i = 0; i < 3; i++)
    {
        printf("enter book name,price,pages\n");
        scanf("%s %f %d",(ptr+i)->name,&(ptr+i)->price,&(ptr+i)->pages);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("\n%s %.2f %d",(ptr+i)->name,(ptr+i)->price,(ptr+i)->pages);
    }
return 0;
}