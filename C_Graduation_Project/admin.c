#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include"format.h"
#include"STD.h"
#include"admin.h"
#define users_limit 100
//static u8 client = 0 ;
static u8 client = 0 ;
bankAccount user[users_limit]; 
void Create_Account()
{
	
	Insert_FullName();
	//printf("%s",user.Full_Name);

	Insert_FullAddress();
	//printf("%s",user.Full_Address);
	Insert_NationalID();
	Insert_Age() ;
	if(user[client].Age<21){
		Guardian();
		Insert_GNI();	
	}
	Insert_Balance();
	
	printf("---------------------------------------------------------------------------------------------------------\n");
	Insert_Account_ID();
	printf("Account ID     : %s\n",user[client].Account_ID);
	// password -> to not make all passwords of the same size
    u8 rNum = (rand() % (UPPERPASS - LOWERPASS + 1)) + LOWERPASS;
    // Password randomizer
    randomPasswordGeneration(rNum, user[client].Password);
    user[client].Password[rNum] = '\0';
	printf("Password       : %s\n",user[client].Password);
	Insert_Status();
	save_to_file();
	printf("---------------------------------------------------------------------------------------------------------\n");
	

	// printf("%s\n",user[0].Password);
	// printf("%s\n",user[0].Account_ID);
	client++;
}


void Insert_FullName(){
	
	u8 space_number = 0 ;
	do{
		printf("Full Name      : ");
		fflush(stdin);
		gets(user[client].Full_Name);	
	}while(checkName(user[client].Full_Name) == 0);	
	//printf("%s",user.Full_Name);

		
	
   
	
}
void Insert_FullAddress()
{
	printf("Full Address   : ");
	fflush(stdin);
	gets(user[client].Full_Address);	
}
void Insert_NationalID()
{
	
	do
	{
		printf("National ID    : ");
		fflush(stdin);
		gets(user[client].National_ID);	
	}while (checknationalID(user[client].National_ID) == 0);	

	
	
}

void Insert_Age()
{ 
	u8 age[5];
	do
    {
        printf("Age            : ");
        gets(age);

    } while (checkAge(age) == 0);
	user[client].Age = atoi(age);
	//printf("%d",user.Age);

    
}
void Guardian()
{
	user[client].Guardian = True;
	printf("Guardian       : True\n");
}
void Insert_GNI(){
	do
    {
        printf("GNational ID   : ");
        gets(user[client].G_National_ID);

    } while (checknationalID(user[client].G_National_ID) == 0);
}
void Insert_Balance()
{
	char balance[20];
    do
    {
        printf("Balance        : ");
        gets(balance);

    } while (checkBalance(balance) == 0);

    user[client].Balance = atof(balance);
}	
void randomPasswordGeneration(int N, char *password)
{
    int random;
    // to be uniqued id
    srand((unsigned int)(time(NULL)));
    // Array of numbers
    char numbers[] = "0123456789";
    // Array of small alphabets
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    // Array of capital alphabets
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    for (int i = 0; i < N; i++)
    {
        random = rand() % 3;
        if (random == 0)
        {
            password[i] = numbers[rand() % 10];
        }
        else if (random == 1)
        {
            password[i] = letter[rand() % 26];
        }
        else
        {
            password[i] = LETTER[rand() % 26];
        }
    }
}
void Insert_Account_ID()
{
	
    FILE *fptr;
    char filename[idLimit + 15] = "./users/";
    do
    {
        // to be uniqued id
        srand((unsigned int)(time(NULL)));

        long long num = (rand() % (UPPERID - LOWERID + 1)) + LOWERID;

        sprintf(user[client].Account_ID, "%lld", num);

        char type[] = ".txt";
        strncat(filename, user[client].Account_ID, strlen(user[client].Account_ID));
        strcat(filename, type);

        fptr = fopen(filename, "rb");

    } while (fptr != NULL);
}
void Insert_Status()
{
	user[client].Account_Status = Active;
	printf("Account Status : Active\n");
}
void save_to_file()
{
	FILE *fptr;
    //char filename[idLimit + 15] = "./users/";
	fptr = fopen("Account.txt", "wb");

    if (fptr == NULL)
    {
        puts("#error couldn't opening file");
        return;
    }

    fwrite(user[client].Password, sizeof(user[client].Password), 1, fptr);
    fwrite(user[client].Full_Name, sizeof(user[client].Full_Name), 1, fptr);
    fwrite(user[client].Full_Address, sizeof(user[client].Full_Address), 1, fptr);
    fwrite(user[client].National_ID, sizeof(user[client].National_ID), 1, fptr);
    fwrite(&user[client].Age, sizeof(user[client].Age), 1, fptr);
    if (user[client].Age < 21)
    {
        fwrite(user[client].G_National_ID, sizeof(user[client].G_National_ID), 1, fptr);
    }
    fwrite(user[client].Account_ID, sizeof(user[client].Account_ID), 1, fptr);
    //fwrite(&newUser.accountStatus, sizeof(newUser.accountStatus), 1, fptr);
    fwrite(&user[client].Balance, sizeof(user[client].Balance), 1, fptr);
    fclose(fptr);

    //printf(user);

}

u8 checkName(u8 *name)
{
    u8 len = strlen(name);
    u8 count = 0;
    for (u8 i = 0; i < len; i++)
    {
        if (name[i] == ' ')
        {
            count++;
        }
    }
    if (count >= 3)
    {
        return 1;
    }
    puts("#warning You must enter at least first four names");
    return 0;
}
u8 checknationalID(char *nationalID)
{
    if (strlen(nationalID) == 14)
    {
        return 1;
    }
   puts("#warning You must enter 14 digit Number");
   return 0;
}

u8 checkAge(u8 *age)
{
    s16 ageNum = atoi(age);
    if (ageNum > 0)
    {
        return 1;
    }
	puts("#warning invalid age");
	return 0;
	
}
u8 checkBalance(u8 *balance)
{
    f32 balanceNum = atof(balance);
    if (balanceNum > 0)
    {
        return 1;
    }
    puts("#warning invaild balance");
    return 0;
}
// void open Account(){
// }
void Make_Transaction(u8 Account_Id[idLimit])
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
				
				break;											1000024937			200
			}													1000025064          50
			;
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
		printf("#Error Your balance is not enough");
	}
	if((flag1_Balance == 1) && (flag2_Balance == 1)){
		user[index1].Balance = user[index1].Balance - Amount_Money ;
		user[index2].Balance = user[index2].Balance + Amount_Money ;
		
	}
	printf("%f\n",user[index1].Balance);
	printf("%f\n",user[index2].Balance);
	
	//printf("%d",index );
	
	
}

