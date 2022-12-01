#include<stdio.h>

void main()
{
	//Variables for 2 numbers
	int a , b ;
	//scan first number from user
	printf("Please Enter number a: ");
	scanf("%d",&a);
	//scan second number from user
	printf("Please Enter number b: ");
	scanf("%d",&b);
	//print Summation of 2 numbers
	printf("a + b = %d\n",a+b);
	//print Subtraction of 2 numbers
	printf("a - b = %d\n",a-b);
	//print anding of 2 numbers
	printf("a & b = %d\n",a&b);
	//print oring of 2 numbers
	printf("a | b = %d\n",a|b);
	//print Xoring of 2 numbers
	printf("a ^ b = %d",a^b);
}