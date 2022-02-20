#include<stdio.h>
#include<limits.h>
#define m_size 100
int main()
{
	int arr[m_size],i,size;
	int sec_max=0,max=1;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter the elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
	if(arr[i]>max)
	{
		max=arr[i];
	}
	}
	const int a=max;
	for(i=0;i<size;i++)
	{
		if((arr[i]>sec_max) &&(arr[i]<a))
	{
		sec_max=arr[i];
	}
	}
		printf("find second max %d\n",sec_max);
}
