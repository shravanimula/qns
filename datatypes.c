#include<stdio.h>
int main()
{
	unsigned char ch1=-20;
	unsigned char ch2=289;
	signed char ch3=130;
	signed char ch4=-140;
	unsigned short int d1=-20;
	unsigned short int d2=65540;
	signed short int d3=32769;
	signed short int d4=-32769;
	unsigned long int l1=4294967298;
	unsigned long int l2=-30;
	signed long int l3=2147483660;
	signed long int l4=-2147483660;
	printf("%d\t %d\t %d\t %d\n" ,ch1,ch2,ch3,ch4);
	printf("%hu\t %hu\t %hd\t %hd\n", d1,d2,d3,d4);
	printf("%u\t %u\t %d\t %d\n",l1,l2,l3,l4);
}	

