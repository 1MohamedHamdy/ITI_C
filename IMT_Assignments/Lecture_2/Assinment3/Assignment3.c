#include<stdio.h>

void main()
{
	//Variables for 3 numbers
	int num1 , num2 , num3 ;
	//scan number 1 from user
	printf("Enter number 1: ");
	scanf("%d",&num1);
	//scan number 2 from user
	printf("Enter number 2: ");
	scanf("%d",&num2);
	//scan number 3 from user
	printf("Enter number 3: ");
	scanf("%d",&num3);
	//check if num1 or num2 or num3 is the max and print it
	if(num1>num2 && num1>num3)
	{
		printf("Maximum number is %d",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("Maximum number is %d",num2);
	}
	else{
		printf("Maximum number is %d",num3);
	}
		
}