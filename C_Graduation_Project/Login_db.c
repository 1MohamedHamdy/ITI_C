#include<stdio.h>
#include<string.h>  
#include"STD.h"

u8 Login_check(u8 user_name[]){
	u16 password ;
	u8 value ;
	u8 admin_user[] = {"Mohamed"};
	
	u16 admin_password = 1234;
	
	value = strcmp(user_name,admin_user);
	if(value == 0){
		printf("Password  : ");
		scanf("%d",&password);
		for(int i=0;i<2;i++){
			if(password == admin_password){
				return 1 ;
				break;
			}
			
			else{
				printf("Try again : ");
				scanf("%d",&password);
			}
			if(i==1){
			printf("Incorrect password for 3 times.No more tries");
			}
		}
		
		
	}
	else{
		printf("You are not registered");
		return 0 ;
	}

	
	
}