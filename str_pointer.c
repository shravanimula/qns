/*"program to compare two strings using pointers 
Input:
string1: Learn C.
string2: Learn C.
Output: Both strings are equal."*/
#include<stdio.h>
#include<string.h>
int strcmp(const char*,const char*);
int main()
{
	char string1[20],string2[20];
	printf("enter a string1:");
        //scanf("%[^\n]s",string1);
	//gets(string1);
	fgets(string1,20,stdin);
	printf("enter a string2:");
	scanf("%[^\n]s",string2);
	//gets(string2);
	fgets(string2,20,stdin);
	if(strcmp(string1,string2)==0)
		printf("strings are equal\n");
	else
		printf("strings are not equal\n");
}
int strcmp(const char *a,const char *b)
{
	while(*a==*b)
	{
		if(*a=='\0')
			return 0;
		a++;
		b++;
	}
	return 1;
}
