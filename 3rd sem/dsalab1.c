
#include<stdio.h>
int main()
{
int a[100],i,n,max,min;
printf("enter the size of array: ");
scanf("%d",&n);
printf("enter  elements into the array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
 }
 min=a[0];
 for(i=0;i<n;i++)
{
if(a[i]<min){
   min=a[i];
}
}
printf(" maximum element is %d: \n",max);
printf(" minimum element is %d: ",min);
}