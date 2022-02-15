#include<stdio.h>
static int a=1,b=3;
void fun();
int main()
{
	fun();
	a++;	b++;
	fun();
	a++;	b++;
	fun();
	printf("a=%d,b=%d\n",a,b);
	a++;	b++;
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
void fun()
{
	static int x=2,y=5;
	printf("x=%d,y=%d\n",x,y);
	x++;
	y++;
	printf("a=%d,b=%d\n",a,b);
}

