#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include"format.h"
#include"admin.h"
#include"client.h"


#include"STD.h"
extern u8 client  ;
extern bankAccount user[users_limit]; 
void main()
{
	
	u8 choice1 ;
	u8 choice2 ;
	u8 choice3 ;
	u8 choice4 ;	
	u8 user_name[50];
	u8 Client_ID[12];
	u8 checker ;
	u8 checker2 ;
	u16 password ;
	u8 Account_Id[idLimit];

	while(1){
	apply_format();
	printf("\n");
	
	printf("- Admin Window     Press 1 \n- Client Window    Press 2\n");
	printf("  Enter Your Choice: ");
	scanf("%d",&choice1);
	printf("---------------------------------------------------------------------------------------------------------------------\n");
	switch(choice1)
	{
		case 1 :
			
			system("cls");
			printf("					         Login Page\n");
			printf("---------------------------------------------------------------------------------------------------------------------\n");
			printf("User_Name : ");
			scanf(" %[^\n]",&user_name);
			checker = Login_check(user_name);
			if(checker == 1){
				system("cls");

				while(1){
					printf("---------------------------------------------------------------------------------------------------------------------\n");
					printf("					         Admin Page\n");
					printf("---------------------------------------------------------------------------------------------------------------------\n");
					printf("Welcome Admin\n");
					printf("- Create New Account       Press 1 \n- Open Existing Account    Press 2\n- Exit System              Press 3\n");
					printf("  Enter Your Choice: ");
					scanf("%d",&choice2);
					printf("---------------------------------------------------------------------------------------------------------------------\n");
					switch(choice2)
					{
						case 1 :
							system("cls");
							Create_Account();
							break;
						case 2 : 
							system("cls");
							printf("Enter Bank Account ID   : ");
							fflush(stdin);
							gets(Account_Id);
							system("cls");
							printf("- Make Transaction         Press 1 \n- Change Account Status    Press 2\n- Get Cash                 Press 3\n- Deposit in Account       Press 4\n- Return to main menu      Press 5\n");
							printf("  Enter Your Choice: ");
							scanf("%d",&choice3);
							printf("---------------------------------------------------------------------------------------------------------------------\n");
							switch(choice3){
								case 1 :
									system("cls");
									Make_Transaction(Account_Id);
									break;
									
								case 2 : 
									system("cls");
									Change_Account_Status(Account_Id);
									break;
									
								case 3 : 
									system("cls");
									Get_Cash(Account_Id);
									break;
								case 4 : 
									system("cls");
									Deposit_Acc(Account_Id);
									break;
								case 5 : 
									system("cls");
									break;

									

									
							}			
							
						//case 3 : 
							//break;
					}
					if(choice2 == 3)	
					break;	
				}system("cls");break;
				
			}
		case 2 : 
			system("cls");
			while(1){
					//system("cls");
					printf("					         Login Page\n");
					printf("---------------------------------------------------------------------------------------------------------------------\n");
					printf("Account ID : ");
					fflush(stdin);
					gets(Client_ID);
					checker2 = Login_check_client(Client_ID);
					if(checker2 == 1){
						printf("---------------------------------------------------------------------------------------------------------------------\n");
						printf("					        Client  Page\n");
						printf("---------------------------------------------------------------------------------------------------------------------\n");
						printf("Welcome Client\n");
						printf("- Make Transaction                Press 1 \n- Change Account Password         Press 2\n- Get Cash                        Press 3\n- Deposit in Account              Press 4\n- Return to main menu             Press 5\n");
						printf("  Enter Your Choice: ");
						scanf("%d",&choice4);
						printf("---------------------------------------------------------------------------------------------------------------------\n");
						switch(choice4)
						{
							case 1 : 
								system("cls");
								Client_Make_Transaction(Client_ID);
								break;
							case 2 : 															
								system("cls");
								Client_Change_Account_Password(Client_ID);
								break ;
							case 3 :
								system("cls");
								Client_Get_Cash(Client_ID);
								break;
							case 4 :
								system("cls");	
								Client_Deposit_Acc(Client_ID);
								break ;

						
						}
					
						
					}
					
					
					
			if(choice4 == 5)	
					break;	}		
		
	}	
	}	
	
}