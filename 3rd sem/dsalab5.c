#include<stdio.h>
int main()
{
	int i,ar1[10],ar2[10],sum[10];
	printf("Enter first array:-\n");
	for(i=0;i<=9;i++)
	{
		printf("ar1[%d]=",i);	
		scanf("%d",&ar1[i]);
	}
	printf("Enter second array:-\n");	
	for(i=0;i<=9;i++)
	{
		printf("ar2[%d]=",i);	
		scanf("%d",&ar2[i]);
	}
	
	for(i=0;i<=9;i++)
	{
		sum[i]=ar1[i]+ar2[i];
	}
	
	printf("Sum of arrays:-");	
	for(i=0;i<=9;i++)
	{
		printf("\nsum[%d]=%d",i,sum[i]);	
	}
		
}