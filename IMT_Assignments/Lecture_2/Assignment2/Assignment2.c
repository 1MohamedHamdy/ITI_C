#include<stdio.h>
void main()
{
	
	/*  id and password table 
	----------------------------------------------------
		id          |     password  | 	username
	----------------------------------------------------
		1234        |     1122   	| 	Ahamed
		5678        |     5566   	| 	Mohmed    	
		1256        |     7788   	| 	Sara
	*/
	//Variables for id and password
	int id , password ;
	//scan id from user
	printf("Please Enter Your ID: ");
	scanf("%d",&id);
	/*check id  ----> if vaild -------> check password -----> if correct ------> print welcome username  
														----> if not correct --> print incorrect password
				----> if not vaild ---> print incorrect id 												  
															  
	*/
	switch(id){
		case 1234:
			printf("Please Enter Your Password: ");
			scanf("%d",&password);
			switch(password){
				case 1122 :
					printf("Welcome Ahmed");
					break;
				default :
					printf("Incorrect Password");
				
			}
			break;
		case 5678:
			printf("Please Enter Your Password: ");
			scanf("%d",&password);
			switch(password){
				case 5566 :
					printf("Welcome Mohamed");
					break;
				default :
					printf("Incorrect Password");
			}		
			break;
		case 1256:
			printf("Please Enter Your Password: ");
			scanf("%d",&password);
			switch(password){
				case 7788 :
					printf("Welcome Sara");
					break;
				default :
					printf("Incorrect Password");
			}
			break;
		default :
			printf("Incorrect ID");
					
	}
	
	
	
}