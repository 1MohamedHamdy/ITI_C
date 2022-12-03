#ifndef Client_H
#define Client_H 
#include"admin.h"
#include"client.h"
void Client_Make_Transaction(u8 Account_Id[idLimit]);
void Client_Change_Account_Password(u8 Account_Id[idLimit]);
void Client_Get_Cash(u8 Account_Id[idLimit]);
void Client_Deposit_Acc(u8 Account_Id[idLimit]);


#endif