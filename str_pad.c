#include <stdio.h>
#pragma pack(1)
struct padding
{
short int s;	
int i;
char c;
};

int main()
{
	struct padding s;
	printf("Size of s is: %ld\n", sizeof(s));
}
