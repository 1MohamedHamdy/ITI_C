#ifndef Admin_H
#define Admin_H 
#include "STD.h"
#define nameLimit 70 
#define addressLimit 70
#define nationalIDLimit 15 
#define	passwordLimit 12
#define gNationalIDLimit 15
#define idLimit	12 
#define UPPERID 9999999999
#define LOWERID 1000000000
#define UPPERPASS 15
#define LOWERPASS 5
#define users_limit 100
#define Status_limit 11

typedef enum { False, True } bool;
typedef enum { Active, Restricted,Closed } Status;
typedef struct{
	u8 Full_Name[nameLimit];
	u8 Full_Address[addressLimit];
	u8 Password[passwordLimit];
	u8 National_ID[nationalIDLimit];
	u8 G_National_ID[gNationalIDLimit];
	u8 Account_ID[idLimit];
	u8 Age;
	bool Guardian ;
	Status Account_Status ;
	f32 Balance ;

}bankAccount;

void Create_Account();
void Insert_FullName();
void Insert_FullAddress();
void Insert_NationalID();
void Insert_NationalID();
void Insert_Age();
void Guardian();
void Insert_GNI();
void Insert_Balance();
void randomPasswordGeneration(int N, char *password);
void Insert_Account_ID();
void save_to_file();
void Insert_Status();
void Make_Transaction(u8 Account_Id[idLimit]);
void Change_Account_Status(u8 Account_Id[idLimit]);
void Get_Cash(u8 Account_Id[idLimit]);
void Deposit_Acc(u8 Account_Id[idLimit]);





u8 checknationalID(char *nationalID);
u8 checkName(u8 *name);
u8 checkAge(u8 *age);
u8 checkBalance(u8 *balance);
void Make_Transaction();



#endif