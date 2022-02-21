#include<stdio.h>
#include <string.h>
int main()
{
	char s[100]; 
	int i,alp=0,dig=0,spec_char=0; 
	printf("Enter  the string : ");
	//fgets(s,100,stdin);
	gets(s);
	for(i=0;s[i];i++)  
	{
		if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
			alp++;
		else if(s[i]>=48 && s[i]<=57)
			dig++;
		else
			spec_char++;
	}		
	printf("Alphabets = %d\n",alp);
	printf("Digits = %d\n",dig);
	printf("Special characters = %d", spec_char);
	return 0;
}
