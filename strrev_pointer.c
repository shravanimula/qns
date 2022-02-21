#include <stdio.h>
int main()
{
   char str[50];
   char rev[50];
   char *sptr = str; 
   char *rptr = rev;
   int i = -1;
   printf("Enter a string: ");
     scanf("%s", str);
	while(*sptr)
	  {
	              sptr++;
		      i++; 
           }
         while(i >= 0)
          {
               sptr--; 
               *rptr = *sptr; 
                rptr++; 
                i--;    
	  }
     *rptr = '\0'; 
     rptr = rev;
     while(*rptr)
     {
      *sptr = *rptr;
        sptr++;
    	rptr++;
      }
   printf("reverse of the string is: %s ", str);
      return 0;
}
