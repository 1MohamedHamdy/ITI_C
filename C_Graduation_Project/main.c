#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include"format.h"
#include"admin.h"

#include"STD.h"

void main()
{
	u8 choice1 ;
	u8 choice2 ;
	u8 choice3 ; 
	u8 user_name[50];
	u8 checker ;
	u16 password ;
	u8 Account_Id[idLimit];


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
							
							//system("cls");
							printf("- Make Transaction         Press 1 \n- Change Account Status    Press 2\n- Get Cash                 Press 3\n- Deposit in Account       Press 4\n- Return to main menu      Press 5\n");
							printf("  Enter Your Choice: ");
							scanf("%d",&choice3);
							printf("---------------------------------------------------------------------------------------------------------------------\n");
							switch(choice3){
								case 1 :
									
							}			
							
						case 3 : 
							break;
					}
				if(choice2 == 3)	
					break;		
				}
			}	
	}			
	
}