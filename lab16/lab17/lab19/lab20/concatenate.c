#include<stdio.h>
int length(char *s)
{
    int i=-1;
    while(s[++i]);
    return i;
}
int main()
{
    char s[60],d[30];
    printf("ENTER TWO STRINGS\n");
    gets(s);
    gets(d);
    int i=0,j;
    j=length(s);
    s[j++]=' ';
    while(s[j++]=d[i++]);
    printf("CONCATENATED STRING IS %s \n",s);
}