#include<stdio.h>
void print_array(int arr[10]);
int get_max(int arr[10]);
int get_min(int arr[10]);


void main()
{
	int arr_values[10];
	int number ;
	for(int i=0;i<10;i++)
	{
		printf("Enter Value %d: ",i+1);
		scanf("%d",&number);
		arr_values[i] = number ;
	}
	print_array(arr_values);
	int max = get_max(arr_values);
	int min = get_min(arr_values);
	printf("The Maximum Value = %d\n",max);
	printf("The Minimum Value = %d",min);
	

}	
void print_array(int arr[10])
{
	printf("the array values : ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

}

int get_max(int arr[10])
{
	int max = arr[0] ;
	for(int i=1;i<10;i++)
	{
		if(max < arr[i]){
			max = arr[i] ;
		}
	}
	return max ;
	
	
}
int get_min(int arr[10])
{
	int min = arr[0];
	for(int i=1;i<10;i++)
	{
		if(min > arr[i]){
			min = arr[i] ;
		}
		
	}
	return min ;
}
	
	

	
	


