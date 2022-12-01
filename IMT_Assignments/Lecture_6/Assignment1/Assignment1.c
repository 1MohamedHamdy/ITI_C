#include<stdio.h>
void bubble_sort(int *arr);
void swap(int *a , int *b);
void print_arr(int *arr);

void main()
{
	
	int arr[10] = {30,10,50,0,-1,100,200,5,20,500};
	printf("array before sorted : ");
	print_arr(arr);
	printf("\n");
	bubble_sort(arr);
	printf("array after  sorted : ");
	print_arr(arr);
	
	
	
}
void bubble_sort(int *arr){
	for(int i=0;i<9;i++){
		for(int j =0;j<9-i;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
			
		}
		
	}
	
	
}
void swap(int *a , int *b){
	int temp = *a ; 
	*a = *b ;
	*b = temp ;
}
void print_arr(int *arr)
{
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
}