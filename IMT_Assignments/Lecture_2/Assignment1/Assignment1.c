#include<stdio.h>

void main()
{
	//still loops not used yet
	//Variables for 10 numbers 
	int num1 , num2 , num3 , num4 , num5 , num6 , num7 , num8 , num9 , num10 ;
	//Variable for searcher number 
	int searcher ;
	//Variable for location of searcher number in case it is found 
	int location ;
	//scan number1 from user 
	printf("Enter Number 1: ");
	scanf("%d",&num1);
	//scan number2 from user 
	printf("Enter Number 2: ");
	scanf("%d",&num2);
	//scan number3 from user 
	printf("Enter Number 3: ");
	scanf("%d",&num3);
	//scan number4 from user 
	printf("Enter Number 4: ");
	scanf("%d",&num4);
	//scan number5 from user 
	printf("Enter Number 5: ");
	scanf("%d",&num5);
	//scan number6 from user 
	printf("Enter Number 6: ");
	scanf("%d",&num6);
	//scan number7 from user 
	printf("Enter Number 7: ");
	scanf("%d",&num7);
	//scan number8 from user 
	printf("Enter Number 8: ");
	scanf("%d",&num8);
	//scan number9 from user 
	printf("Enter Number 9: ");
	scanf("%d",&num9);
	//scan number10 from user 
	printf("Enter Number 10: ");
	scanf("%d",&num10);
	//scan number to search on it in the 10 numbers
	printf("Enter the value to search: ");
	scanf("%d",&searcher);
	/*	check if number is in 10 numbers
		in case it is found -----> print value is exist and it's location
		in case it not found ----> print value not exist
	*/  
	if(searcher == num1 ||searcher == num2||searcher == num3||searcher == num4||searcher == num5||searcher == num6||searcher == num7||searcher == num8||searcher == num9||searcher == num10)
	{
		if(searcher == num1){
			location = 1 ;
			printf("Value is exist at element number %d",location);
		}
		else if(searcher == num2){
			location = 2 ;
			printf("Value is exist at element number %d",location);	
		}
		else if(searcher == num3){
			location = 3 ;
			printf("Value is exist at element number %d",location);
		}
		else if(searcher == num4){
			location = 4 ;
			printf("Value is exist at element number %d",location);	
		}
		else if(searcher == num5){
			location = 5 ;
			printf("Value is exist at element number %d",location);
		}
		else if(searcher == num6){
			location = 6 ;
			printf("Value is exist at element number %d",location);
		}
		else if(searcher == num7){
			location = 7 ;
			printf("Value is exist at element number %d",location);
		}
		else if(searcher == num8){
			location = 8 ;
			printf("Value is exist at element number %d",location);
		}
		else if(searcher == num9){
			location = 9 ;
			printf("Value is exist at element number %d",location);
		}
		else{
			location = 10 ;
			printf("Value is exist at element number %d",location);
		}
	}
	else{
		printf("Value is not exist");
	}
	
	
}