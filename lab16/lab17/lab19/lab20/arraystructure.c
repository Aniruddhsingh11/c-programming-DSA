
#include<stdio.h>
struct book
    {
        char name[20];
        float price;
        int pages;
    };
int main()
{
    struct book b[10];
    int i;
    for(i=0;i<=3;i++)
    {
        printf("ENTER NAME OF BOOKS,PRICE AND PAGES\n");
        scanf("%s%f%d",b[i].name,&b[i].price,&b[i].pages);
    }
    printf("THE NAME OF BOOKS ALONG WITH PRICE AND NUMBER OF PAGES\n");
    for(i=0;i<=3;i++)
    {
        printf("%s, %.2f, %d \n",b[i].name,b[i].price,b[i].pages);
    }
}