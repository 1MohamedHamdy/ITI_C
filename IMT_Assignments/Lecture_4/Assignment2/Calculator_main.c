#include<stdio.h>
int Calculator_db(int id);
void main()
{
	int operation_id ;
	printf("\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("						Calculator						\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n\n");
	printf(" ID\t\tOperation\t\tNumber of Operands\n");
	printf(" 1\t\tAdd\t\t\t       2\n");
	printf(" 2\t\tSubtract\t\t       2\n");
	printf(" 3\t\tMultiply\t\t       2\n");
	printf(" 4\t\tDivide\t\t       	       2\n");
	printf(" 5\t\tAND\t\t\t       2\n");
	printf(" 6\t\tOR\t\t\t       2\n");
	printf(" 7\t\tNOT\t\t\t       1\n");
	printf(" 8\t\tXOR\t\t\t       2\n");
	printf(" 9\t\tReminder\t\t       2\n");
	printf(" 10\t\tIncrement\t\t       1\n");
	printf(" 11\t\tDecrement\t\t       1\n");
	printf("\n");
	printf("Please Enter operation ID : ");
	scanf("%d",&operation_id);
	Calculator_db(operation_id);
	
	

}