#include<stdio.h>
void add(int x , int y);
void subtract(int x , int y);
void multiply(int x , int y);
void divide(int x , int y);
void and(int x , int y);
void or(int x , int y);
void not(int x );
void xor(int x , int y);
void reminder(int x , int y);
void increment(int x);
void decrement(int x);

int Calculator_db(int id){
	int op1,op2 ; 

	switch(id){
		case 1: 
				printf("Enter Operand 1 : ") ;
				scanf("%d",&op1);
				printf("Enter Operand 2 : ") ;
				scanf("%d",&op2);
				printf("----------------------------------------------\n");
				add(op1,op2);
				break ;	
		case 2: 
				printf("Enter Operand 1 : ") ;
				scanf("%d",&op1);
				printf("Enter Operand 2 : ") ;
				scanf("%d",&op2);
				printf("----------------------------------------------\n");
				subtract(op1,op2);
				break ;	
		case 3: 
				printf("Enter Operand 1 : ") ;
				scanf("%d",&op1);		
				printf("Enter Operand 2 : ") ;
				scanf("%d",&op2);
				printf("----------------------------------------------\n");
				multiply(op1,op2);

				break ;	
		case 4: 
				printf("Enter Operand 1 : ") ;
				scanf("%d",&op1);		
				printf("Enter Operand 2 : ") ;
				scanf("%d",&op2);
				printf("----------------------------------------------\n");

				divide(op1,op2);

				break ;	
		case 5: 
				printf("Enter Operand 1 : ") ;
				scanf("%d",&op1);		
				printf("Enter Operand 2 : ") ;
				scanf("%d",&op2);
				printf("----------------------------------------------\n");
				and(op1,op2);
				break ;		
		case 6: 
				printf("Enter Operand 1 : ") ;
				scanf("%d",&op1);		
				printf("Enter Operand 2 : ") ;
				scanf("%d",&op2);
				printf("----------------------------------------------\n");
				or(op1,op2);				
				break ;	
		case 7: 
				printf("Enter Operand 1 : ") ;
				scanf("%d",&op1);	
				printf("----------------------------------------------\n");
				not(op1);			
				break ;
		case 8: 
				printf("Enter Operand 1 : ") ;
				scanf("%d",&op1);		
				printf("Enter Operand 2 : ") ;
				scanf("%d",&op2);
				printf("----------------------------------------------\n");
				xor(op1,op2);		
				break ;			
		case 9: 
				printf("Enter Operand 1 : ") ;
				scanf("%d",&op1);		
				printf("Enter Operand 2 : ") ;
				scanf("%d",&op2);
				printf("----------------------------------------------\n");
				reminder(op1,op2);			
				break ;
		case 10: 
				printf("Enter Operand 1 : ") ;
				scanf("%d",&op1);	
				printf("----------------------------------------------\n");
				increment(op1);				
				break ;		
		case 11: 
				printf("Enter Operand 1 : ") ;
				scanf("%d",&op1);	
				printf("----------------------------------------------\n");
				decrement(op1);				
				break ;		
		default: 
				printf("Incorrect ID!\n");
				
					
	}
	
	 
}
void add(int x , int y)
{
	printf("Result = %d", x+y);
}
void subtract(int x , int y)
{
	printf("Result = %d", x-y);	
}
void multiply(int x , int y)
{
	printf("Result = %d", x*y);	
}
void divide(int x , int y)
{
	if(y!=0){
		printf("Result = %d",x/y);
	}
	else{
		printf("Error divison by zero");
	}
}	
void and(int x , int y)
{
	printf("Result = %d", x&y);	
}
void or(int x , int y)
{
	printf("Result = %d", x|y);	
}
void not(int x )
{
	printf("Result = %d", ~x);	
}
void xor(int x , int y)
{
	printf("Result = %d", x^y);	
}
void reminder(int x , int y)
{
	printf("Result = %d", x%y);	
}
void increment(int x)
{
	printf("Result = %d", ++x);	
}
void decrement(int x)
{
	printf("Result = %d", --x);	
}