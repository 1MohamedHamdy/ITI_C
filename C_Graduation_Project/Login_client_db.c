#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include"format.h"
#include"STD.h"
#include"admin.h"
#include"client.h"
extern u8 client  ;
extern bankAccount user[users_limit]; 

u8 Login_check_client(u8 client_id[]){
	u8 password[passwordLimit];
	u8 value ;
	u8 value2 ;
	u8 i = 0 ;
	u8 index1 =0 ;
	u8 flag =0;
	for(u8 i = 0;i<client;i++){
		value = strcmp(user[i].Account_ID , client_id);
		if(value == 0){
			flag = 1;
			printf("Password : ");
			gets(password);
			index1 = i ;
			break;
			
																
			
		}
	}
	value2 = strcmp(user[index1].Password ,password);
	if(value2 == 0 && flag == 1){
		return 1;
	}	
	else if(flag == 0){
		printf("You are not Registered\n");
		system("cls");
		return 0 ;
	}
	else if( value2 == 1) {
		printf("Incorrect Passsword");
		system("cls");
		return 0 ;
		
	}		
	else{
		return 0 ;
	}
	
	
	
	
}