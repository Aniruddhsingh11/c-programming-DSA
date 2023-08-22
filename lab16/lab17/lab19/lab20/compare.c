#include<stdio.h>
int main() 
{
   char str1[30], str2[30];
   int i;
   printf("ENTER TWO SRINGS\n");
   gets(str1);
   gets(str2);
   i = 0;
   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i] > str2[i]||str1[i] < str2[i])
   {
      printf("THE STRINGS ARE NOT SAME HENCE VALUE RETURNED IS -1\n");
      printf("THE POSITION WHERE THE DIFFERENCE IS FOUND IS %d\n",i+1);
   }
   else
      printf("THE STRINGS ARE SAME HENCE THE VALUE RETURNED IS 0\n");
}