#include<stdio.h>
void main()
{
	//Variable for height of the pyramids
	int height ;
	//scan height from user
	printf("Please Enter the hieght of the pyramids : ");
	scanf("%d",&height);
	/* if height = 4 
	    1   2   3   4   5   6   7   
	1		*
	2	    *	*   *                    -----> rows = height ----> at end of each row we print new line  
	3	*   *	*   *	*                -----> columns = (2*height)-1  ----> at each column in row we print * and spaces 
	4   *	*   *   *   *   *   *    											  in row 1 we print only one star on column 4 and spaces on other
																				  in row 2 we print two stars on column 3 , 4 , 5 and spaces on other
																				            h-1    h   h+1   ---> h for height 
																				                   4         ---> first row we print star at h-0 
																							  3	   4	5    ---> second row we print star at h-1 ,h-0 ,h+1
																												  we can see we print star if column >= h-(i-1) <= h+(i-1) and spaces on others 													
																												
	
	
	
	*/	
	for(int i = 1;i<=height;i++){
		for(int j=1;j<=((height*2)-1);j++ ){
			if(j>=height-(i-1)&&j<=height+(i-1)){
				printf("*");
			}
			else{
				printf(" ");
			}
			
			
			
			
		}
		printf("\n");
		
	}
}
