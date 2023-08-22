#include<stdio.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    };
    struct book b1,b2;
    printf("ENTER NAME,PRICE AND NUMBER OF PAGES OF 2 BOOKS\n");
    scanf("%s%f%d",b1.name,&b1.price,&b1.pages);
    scanf("%s%f%d",b2.name,&b2.price,&b2.pages);
    printf("ENTERED VALUE IS\n");
    printf("%s, %f, %d \n",b1.name,b1.price,b1.pages);
    printf("%s, %f, %d \n",b2.name,b2.price,b2.pages);
}