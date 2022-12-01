#include<stdio.h>

//prototype of functions
int Max_number(int a , int b , int c , int d);
int Min_number(int a , int b , int c , int d);

void main()
{
	//Variables for 4 numbers
	int num1 , num2 , num3 , num4 ;
	//scan First value from user
	printf("Please Enter First value : ");
	scanf("%d",&num1);
	//scan Second value from user
	printf("Please Enter Second value : ");
	scanf("%d",&num2);
	//scan Third value from user
	printf("Please Enter Third value : ");
	scanf("%d",&num3);
	//scan Fourth value from user
	printf("Please Enter Fourth value : ");
	scanf("%d",&num4);
	printf("\n");
	//call function Max_number and save return value and print it
	int max = Max_number(num1,num2,num3,num4);
	printf("The Maxmium Number = %d\n",max);
	//call function Min_number and save return value and print it
	int min = Min_number(num1,num2,num3,num4);
	printf("The Minimum Number = %d",min);

	
}
//Fuction to compare received 4 numbers and return the max between them
int Max_number(int a , int b , int c , int d)
{
	if(a>b && a>c && a>d)
	{
		return a ;
	}
	else if(b>a && b>c && b>d)
	{
		return b ;
	}
	else if(c>a && c>b && c>d)
	{
		return c ;
	}
	else{
		return d ;
	}
}
//Fuction two compare received 4 numbers and return the min between them
int Min_number(int a , int b , int c , int d)
{
	if(a<b && a<c && a<d)
	{
		return a ;
	}
	else if(b<a && b<c && b<d)
	{
		return b ;
	}
	else if(c<a && c<b && c<d)
	{
		return c ;
	}
	else{
		return d ;
	}

}