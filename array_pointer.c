#include<stdio.h>
//int i,element;
int search(int ,int *,int);
int main()
{
      	int n,b;
      printf("enter the size of array:");
      scanf("%d",&n);
      int a[n],i;
      printf("enter the elements:\n");
        for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
     printf("enter the element to be searched:");
      scanf("%d",&b);
       search(n,a,b);
      return 0;
}
int search(int n,int *a,int b)
{
	int element,i;
	for(i=0;i<n;i++)
	{
		if(b==a[i])
		{
		    element=1;
		    break;
		 }
	 }
	    if(element==1)
	    {
            printf("%d is present in the array",b);
	      } 
	    else 
	    {
	       printf("%d is not present in the array",b);
	     }
}
