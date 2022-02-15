#include<stdio.h>
extern int a;
int a=5;
void fun();
int main()
{
	printf("%d\n",a);
	fun();
	++a;
	printf("%d\n",a);
}
void fun()
{
	a++;
	printf("%d\n",a);
	return ;
}
