#include <stdio.h> 
int main() 
{
    int i = 1;
    int j = 20;
    int *const ptr = &i;
    printf("ptr: %d\n", *ptr); 
	   *ptr = 10;  
       	   printf("ptr: %d\n", *ptr);   
       	   return 0;
}
