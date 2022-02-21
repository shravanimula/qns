#include<stdio.h>
int main()
{
	int n,a,i,j,k;
	printf("enter the number:");
	scanf("%d",&n);
	a=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=a;k++)
		{
			printf("*");
		}
		a--;
		printf("\n");
	}
	return 0;
}
