#include <stdio.h>
#define maxsize 50
void display(int *arr, int size)
{
	int i;
	for(i = 0; i <= size; i++)
	{
	    printf("%d ", *(arr + i));
	}
}
int main()
{
	int arr1[maxsize], arr2[maxsize];
	int size, i;
	int *ptr1 = arr1; 
	int *ptr2 = arr2; 
	int *last_arr = arr1+9; 
	printf("Enter size of array: ");
	scanf("%d", &size);
      printf("Please input arr1 elements: ");
	 for(i = 0; i <= size; i++)
	 {
	    scanf("%d", ptr1 + i); 
	  }
	 printf("\narr1 elements before coping: \n");
	 display(arr1, size);
	 printf("\narr2 elements before coping:");
	 display(arr2, size);
	      while(ptr1 <= last_arr)
	      {
	         *ptr2 = *ptr1;
		  ptr1++;
		  ptr2++;
	   }
	       printf("\narr1 elements after coping: ");
		display(arr1, size);
		 printf("\narr2 elements after coping: ");
		  display(arr2, size);
		   return 0;
}
