#include<stdio.h>
int main()
{ 
	int i = 1;
   	int j = 2;
	const int *ptr = &i;
   	printf("ptr: %d\n", *ptr); 
	 ptr = &j;
     printf("ptr: %d\n", *ptr); 
     return 0;
}
