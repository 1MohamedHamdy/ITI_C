#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include"format.h"
#include"STD.h"
#include"client.h"
#include"admin.h"

extern u8 client  ;
extern bankAccount user[users_limit]; 
void Client_Make_Transaction(u8 Account_Id[idLimit])
{
	
	u8 flag1_Balance = 0;
	u8 flag2_Balance = 0;
	f32 sender_balance = 0;
	f32 receiver_balance = 0 ;
	u8 Rec_Account_ID[idLimit];
	f32 Amount_Money ;
	u8 i = 0 ;
	u8 index1 =0 ;
	u8 index2 =0 ;

	u8 value ;
	printf("Receiver Bank Account ID : ");
	fflush(stdin);
	gets(Rec_Account_ID);
	printf("Amount of Money : ");
	fflush(stdin);
	scanf("%f",&Amount_Money);
	
	//printf("%d",client);
	//puts(user[0].Account_ID);
	//puts(Account_Id);
	for(u8 i = 0;i<client;i++){
		value = strcmp(user[i].Account_ID , Account_Id);
		if(value == 0){
			if(user[i].Balance > Amount_Money && user[i].Account_Status == 0 ){
				flag1_Balance = 1 ;
				index1 = i ;
				
				break;											
			}													
			
		}
		
		
	}
	for(u8 i = 0;i<client;i++){
		value = strcmp(user[i].Account_ID , Rec_Account_ID);
		if(value == 0){
			if(user[i].Account_Status == 0 ){
				flag2_Balance = 1 ;
				index2 = i ;
				
				break;
			}
			;
		}
		
		
	}
	if((flag1_Balance == 0) | (flag2_Balance == 0) ){
		printf("#Error Your balance is not enough\n");
	}
	if((flag1_Balance == 1) && (flag2_Balance == 1)){
		user[index1].Balance = user[index1].Balance - Amount_Money ;
		user[index2].Balance = user[index2].Balance + Amount_Money ;
		
	}
	printf("%f\n",user[index1].Balance);
	printf("%f\n",user[index2].Balance);
	
	//printf("%d",index );
																			
}
void Client_Change_Account_Password(u8 Account_Id[idLimit])
{
	u8 new_Password[passwordLimit];
	u8 i = 0 ;														
	u8 index1 =0 ;
	

	u8 value ;												
	printf("New Password : ");								
	fflush(stdin);
	gets(new_Password);
	
	//printf("%d",client);
	//puts(user[0].Account_ID);
	//puts(Account_Id);
	for(u8 i = 0;i<client;i++){
		value = strcmp(user[i].Account_ID , Account_Id);
		if(value == 0){
				index1 = i ;
				break;											
																
			
		}
	}
	 for(u8 loop = 0; loop < passwordLimit; loop++) {
      user[index1].Password[loop] = new_Password[loop];
   }
	//user[index1].Password = new_Password ; 
	printf("%s",user[index1].Password);
	
}
void Client_Get_Cash(u8 Account_Id[idLimit])
{
	u8 flag1_Balance = 0;
	f32 Amount_Money ;
	u8 i = 0 ;
	u8 index1 =0 ;
	u8 index2 =0 ;

	u8 value ;
	printf("Amount of Money : ");
	fflush(stdin);
	scanf("%f",&Amount_Money);
	
	//printf("%d",client);
	//puts(user[0].Account_ID);
	//puts(Account_Id);
	for(u8 i = 0;i<client;i++){
		value = strcmp(user[i].Account_ID , Account_Id);
		if(value == 0){
			if(user[i].Balance > Amount_Money && user[i].Account_Status == 0 ){
				flag1_Balance = 1 ;
				index1 = i ;
				break;											
			}													
			
		}
	}
	if(flag1_Balance == 1){
		user[index1].Balance = user[index1].Balance - Amount_Money ;
		printf("%f\n",user[index1].Balance);
	}		
	
	else{
		printf("#Error Your balance is not enough\n");
	}
	
		
	
	
}
void Client_Deposit_Acc(u8 Account_Id[idLimit])
{
	u8 flag1_Balance = 0;
	f32 Amount_Money ;
	u8 i = 0 ;
	u8 index1 =0 ;
	u8 index2 =0 ;

	u8 value ;
	printf("Amount of Money : ");
	fflush(stdin);
	scanf("%f",&Amount_Money);
	
	//printf("%d",client);
	//puts(user[0].Account_ID);
	//puts(Account_Id);
	for(u8 i = 0;i<client;i++){
		value = strcmp(user[i].Account_ID , Account_Id);
		if(value == 0){
			if(user[i].Account_Status == 0 ){
				flag1_Balance = 1 ;
				index1 = i ;
				break;											
			}													
			
		}
	}
	if(flag1_Balance == 1){
		user[index1].Balance = user[index1].Balance + Amount_Money ;
		printf("%f\n",user[index1].Balance);
	}		
	
	else{
		printf("#Error Your Account Status is not Active\n");
	}
	
		
	
	
}