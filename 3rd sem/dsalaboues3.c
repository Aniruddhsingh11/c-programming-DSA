//WAP to create an array of N elements, where the value of N is given by the user, and then print the sum of all the elements of the array.
#include<stdio.h>

int main()
{
int n;
int sum=0;
printf("Enter size of the array :\n");
scanf("%d",&n);
int a[n];
int *ptr=a;
printf("Enter the elements : \n");
for(int i=0;i<n;i++){
    
    scanf(" %d", ptr);
    ptr++;
}
for(int i=0;i<n;i++){
sum=sum+ *(a + i);
}
printf("%d is the sum of the elements of the array\n",sum);





return 0;
}