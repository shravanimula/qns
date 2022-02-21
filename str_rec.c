#include <stdio.h>
#include <string.h>
#include <ctype.h>
char str(char *);
int main()
{
	char string[20], let;
      	printf("Enter a string : ");
       	scanf("%s", string);
       let = str(string);
	if (let == 0)
    	{
		printf("No capital letter %s\n", string);
	}
	else
	{
		printf("The capital letter  is %c\n", let);    }
	return 0;
}
char str(char *string)
{
	static int i = 0;
	if (i < strlen(string))
	{
		if (isupper(string[i]))
		{
			return string[i];
		}
		else
		{	i = i + 1;
			return str(string);
		}
	}
	else return 0;
}
