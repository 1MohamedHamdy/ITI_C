#include<stdio.h>
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;

typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;

typedef float f32;
typedef double f64;

typedef struct{
	u8 	ID ;
	f32	Math ;
	f32	Language;
	f32	Physics ;
	f32	Chemistry ;
}students ;
	
void main()
{
	printf("		-------------------Welcome To ITI Students Management-------------------\n");
	printf("#Admin Page\n");

	students arr[10];
	for(u8 i=0;i<10;i++){
		printf("Please Enter Student %d ID : ",i+1);
		scanf("%d",&arr[i].ID);
		printf("Math Grade : ");
		scanf("%f",&arr[i].Math);
		printf("Language Grade : ");
		scanf("%f",&arr[i].Language);
		printf("Physics Grade : ");
		scanf("%f",&arr[i].Physics);
		printf("Chemistry Grade : ");
		scanf("%f",&arr[i].Chemistry);
		printf("---------------------------------------------------------------------------------------------------\n");
	}
	u8 std_id ;
	u8 flag = 0 ;
	u8 state ;
	printf("#Students_Page\n");
	printf("Plese Enter Student ID: ");
	scanf("%d",&std_id);
	for(u8 i=0;i<10;i++){
		if(std_id == arr[i].ID){
			flag = 1 ;
			state = i ;
			break ;		
		}
		
	}
	if(flag ==1){
		printf("Math Grade : %f\n",arr[state].Math);
		printf("Language Grade : %f\n",arr[state].Language);
		printf("Physics Grade : %f\n",arr[state].Physics);
		printf("Chemistry Grade : %f",arr[state].Chemistry);	
	}
	else{
			printf("Student ID is not correct");
	}
	
	
}