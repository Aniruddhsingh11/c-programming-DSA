#include<stdio.h>
void namaste();
void salam();
int main ()
{
  printf("enter i for indian s for muslim:");
  char ch;
  scanf("%c",&ch);
  if(ch=='i'){
    namaste();
    namaste();
  }
  else{
    salam();
    salam();
  }
  return 0;

}
void namaste()
{
    printf("namaste!\n");
}
void salam()
{
    printf("salam!\n");
}