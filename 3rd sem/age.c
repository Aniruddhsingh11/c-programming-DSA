#include<stdio.h>
struct Date {
int dd,mm,yy;
};
 int main() {
struct Date d1,d2;
struct Date difference;
printf("Enter date of birth :[dd/mm/yyyy]");
scanf("%2d/%2d/%4d",&d1.dd,&d1.mm,&d1.yy);
printf("Enter current date :[dd/mm/yyyy]");
scanf("%2d/%2d/%4d",&d2.dd,&d2.mm,&d2.yy);
if(d1.dd > d2.dd) {
d2.dd+=30; d2.mm--;
if(d2.mm==0) {
d2.yy--;
d2.mm=12;
}
}
difference.dd = d2.dd - d1.dd;
if(d1.mm > d2.mm) {
d2.mm += 12;
d2.yy--;
}
difference.mm = d2.mm - d1.mm;
difference.yy = d2.yy - d1.yy;

printf("Age of person is %d years %d months %d days",difference.yy,difference.mm,difference.dd);
return 0;
}
