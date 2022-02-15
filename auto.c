#include <stdio.h>  
void fun()
{
	auto int b;
	printf("%d",b);
}
int main()  
{  
	int a; //auto  
	float f;   
	printf("%d\t  %f\n",a,f); 
	int b=10;
	printf("%d\n",b);
	fun();
	return 0;  
}  
