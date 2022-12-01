#include<stdio.h>

int passed_num(float class1[10],float class2[10],float class3[10]);
int failed_num(float class1[10],float class2[10],float class3[10]);
float hieghst_degree(float class1[10],float class2[10],float class3[10]);
float lowest_degree(float class1[10],float class2[10],float class3[10]);
float average_grade(float class1[10],float class2[10],float class3[10]);


void main()
{
	//manage small school 
	
	//define three array each array represent degrees of students on class
	float class1[10] = {70,80,85,40,20,10,60.7,55,90,96.7};
	float class2[10] = {65,45,50,98,15,52,90,75,68,95.1};
	float class3[10] = {82,100,40,22,35,52,72.9,87,92,65};
	int num_passed 	= passed_num(class1,class2,class3);
	int num_failed 	= failed_num(class1,class2,class3);
	float hieghst_dg  = hieghst_degree(class1,class2,class3);
	float lowest_dg   = lowest_degree(class1,class2,class3);
	float average_gd  = average_grade(class1,class2,class3);
	printf("------------------School Statistics------------------\n");
	printf("Number of Passed Students = %d\n",num_passed);
	printf("Number of Failed Students = %d\n",num_failed);
	printf("Hieghst degree = %f\n",hieghst_dg);
	printf("Lowest degree = %f\n",lowest_dg);
	printf("Average grade = %f",average_gd);

}
	
	int passed_num(float class1[10],float class2[10],float class3[10])
	{
		int counter1 = 0 ;
		int counter2 = 0 ;
		int counter3 = 0 ;
		int counter ;
		for(int i=0;i<10;i++)
		{
			if(class1[i]>50){
				counter1++;	
			}
			if(class2[i]>50){
				counter2++;	
			}
			if(class3[i]>50){
				counter3++;	
			}
		}
		counter = counter1 + counter2 + counter3 ;
		return counter ;	
	}
	int failed_num(float class1[10],float class2[10],float class3[10])
	{
		int counter1 = 0 ;
		int counter2 = 0 ;
		int counter3 = 0 ;
		int counter ;
		for(int i=0;i<10;i++)
		{
			if(class1[i]<50){
				counter1++;	
			}
			if(class2[i]<50){
				counter2++;	
			}
			if(class3[i]<50){
				counter3++;	
			}
		}
		counter = counter1 + counter2 + counter3 ;
		return counter ;	
	}
	float hieghst_degree(float class1[10],float class2[10],float class3[10])
	{
		float max1 = class1[0];
		float max2 = class2[0] ;
		float max3 = class3[0];
		for(int i=1;i<10;i++)
		{
			if(max1<class1[i]){
				max1 = class1[i];
			}
			if(max2<class2[i]){
				max2 = class2[i];
			}
			if(max3<class3[i]){
				max3 = class3[i];
			}
		}
		if(max1>max2 && max1>max3) return max1 ;
		else if(max2>max1 && max2>max3) return max2 ;
		else return max3 ;
	}
	float lowest_degree(float class1[10],float class2[10],float class3[10])
	{
		float min1 = class1[0];
		float min2 = class2[0] ;
		float min3 = class3[0];
		for(int i=1;i<10;i++)
		{
			if(min1>class1[i]){
				min1 = class1[i];
			}
			if(min2>class2[i]){
				min2 = class2[i];
			}
			if(min3>class3[i]){
				min3 = class3[i];
			}
		}
		if(min1<min2 && min1<min3) return min1 ;
		else if(min2<min1 && min2<min3) return min2 ;
		else return min3 ;
	}
	float average_grade(float class1[10],float class2[10],float class3[10])
	{
		float sum1 = 0;
		float sum2 = 0 ;
		float sum3 = 0 ;
		float average ;
		for(int i=0;i<10;i++)
		{
			sum1+= class1[i]; 
			sum2+= class2[i];
			sum3+=class3[i];
	    }
		average = (sum1+sum2+sum3)/30 ;
		return average ;
	}
	

