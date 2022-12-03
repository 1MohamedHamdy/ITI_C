#ifndef Admin_H
#define Admin_H 
#include "STD.h"
#define nameLimit 70 
#define addressLimit 70
#define nationalIDLimit 15 
#define	passwordLimit 12
#define gNationalIDLimit 15
#define idLimit	10 
typedef enum { False, True } bool;
typedef enum { Active, Restricted,Closed } Status;
typedef struct{
	u8 Full_Name[nameLimit];
	u8 Full_Address[addressLimit];
	u8 National_ID[nationalIDLimit];
	u8 Password[passwordLimit];
	u8 G_National_ID[gNationalIDLimit];
	u8 Account_ID[idLimit];
	u8 Age;
	bool Guardian ;
	Status Account_Status ;
	f32 Balance ;
}bankAccount;

#endif
