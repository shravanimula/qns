#include <stdio.h>  
void fun()
{
	register int b=10;
	printf("%d\n",b);
}
int main()  
{  
	register int a; 
	printf("%d\n",a);
	fun();
	register int b=5;
	printf("%d\n",b);
}  

