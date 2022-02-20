#include<stdio.h>
#include<stdlib.h>
union student{
	int rollno;
};
int main( )
{
    union student *stu;
    stu=(union student*)malloc(sizeof(union student));
    stu->rollno=11;
   printf("\n rollno: %d",stu->rollno);
   printf("\n Size: %d",sizeof(*stu));		
}
