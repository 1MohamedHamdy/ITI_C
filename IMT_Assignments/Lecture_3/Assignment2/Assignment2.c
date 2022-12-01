#include<stdio.h>
void main()
{
	//Variables for id and password
	int id ;
	int password ;
	//scan id from user
	printf("Please Enter your ID : ");
	scanf("%d",&id);
	//check if id is corect or not
	if(id == 1234 || id == 5678 || id == 9870)
	{
		// if id is correct ----> scan password with 3 tries to enter the correct password
		printf("Please Enter Password: ");
		scanf("%d",&password);
		for(int i = 0 ;i<2;i++){
			if(id == 1234 && password == 7788){
				printf("Welcome Ahmed");
				break;
			}
			else if(id == 5678 && password == 5566){
				printf("Welcome Amr");
				break;
				
			}
			else if(id == 9870 && password == 1122){
				printf("Welcome Wael");
				break;
				
			}
			else{
				printf("Try again : ");
				scanf("%d",&password);
				
			}
			// if user enter incorrect password for 3 times print this 
			if(i==1)
				printf("Incorrect password for 3 times. No more tries");

		}
		
		
	}
	//if user enter incorrect id print You are not registered
	else{
		printf("You are not registered");
	}
	
}