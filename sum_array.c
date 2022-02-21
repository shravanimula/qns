//program to find sum of array elements using recursion
#include <stdio.h>
#define maxsize 100
int sum(int arr[], int s, int len);
int main()
{
       	int arr[maxsize];
	int n, i, sum_array;    
	printf("Enter size of the array: ");
	scanf("%d", &n);
	printf("Enter elements in the array: ");
	for(i=0; i<n; i++)
	{
	      scanf("%d", &arr[i]);
	}
	sum_array = sum(arr, 0, n);
	printf("Sum of array elements: %d", sum_array);
	return 0;
}
int sum(int arr[], int s, int len) 
{
	  if(s >= len)
	    return 0;
	 return (arr[s] + sum(arr, s + 1, len));
}
