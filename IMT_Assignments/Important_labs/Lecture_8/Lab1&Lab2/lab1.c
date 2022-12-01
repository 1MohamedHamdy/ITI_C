#include<stdio.h>
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;

typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;

typedef float f32;
typedef double f64;

typedef struct {
	u8  name[6];
	f32 salary ;
	f32 bouns ;
	f32 deduction ;
}employess ;

void main(){
	employess arr[3];
	f32 total_eem[3] = {0,0,0};
	f32 total_aem ;
	for(u8 i = 0;i<3;i++){
		printf("Please Enter Employee %d Name : ",i+1);
		scanf(" %[^\n]",&arr[i].name);
		printf("Please Enter %s Salary : ",arr[i].name);
		scanf("%f",&arr[i].salary);
		printf("Please Enter %s Bouns : ",arr[i].name);
		scanf("%f",&arr[i].bouns);
		printf("Please Enter %s Deduction : ",arr[i].name);
		scanf("%f",&arr[i].deduction);
		total_eem[i] = arr[i].salary + arr[i].bouns - arr[i].deduction ;
		printf("------------------------------------------------------------");
		printf("\n");
	}
	total_aem = total_eem[0] + total_eem[1] + total_eem[2] ;
	printf("Total Value Needed is %f",total_aem);
	
	
}