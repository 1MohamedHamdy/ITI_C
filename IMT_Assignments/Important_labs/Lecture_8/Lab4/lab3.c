#include<stdio.h>
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;

typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;

typedef float f32;
typedef double f64;


typedef struct 
{
	u16	x ;
	u32 y ;
	u16 z ;
	u32 k ;
}my_struct1;

typedef struct 
{
	u16	x ;
	u16 z ;
	u32 y ;
	u32 k ;
}my_struct2;

void main()
{
	printf("before Arrangement : \n");
	printf("---------------------\n");
	printf("Size of This struct  = %d  bytes\n",sizeof(my_struct1));
	printf("----------------------------------------------------\n");
	printf("After Arrangement : \n");
	printf("---------------------\n");
	printf("Size of This struct  = %d  bytes",sizeof(my_struct2));


}