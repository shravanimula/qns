#include<stdio.h>
void copy_str(char*, char*);
int main()
{
	char s1[20], s2[20];
	printf("Enter string s1:");
       	fgets(s1,20,stdin);	
       copy_str(s2,s1);    
       printf("copy string is: %s", s2);    
       return 0;
}
void copy_str(char *s2, char *s1)
{
	while(*s1)
       	{
		*s2 = *s1;        
		  s1++;        
		   s2++;
	 }    
	        *s2= '\0';
}
