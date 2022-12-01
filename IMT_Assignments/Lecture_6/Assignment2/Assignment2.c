#include<stdio.h>
void main()
{
	int x , y , z  ; 
	int *p,*q,*r ;
	x = 20 ; 
	y = 40 ;
	z = 60 ;
	p = &x ;
	q = &y ;
	r = &z ;
	printf(" x = %d \n y = %d \n z = %d \n p = %p \n q = %p \n r = %p \n *p = %d \n *q = %d \n *r = %d\n",x,y,z,p,q,r,*p,*q,*r);
	printf("Swapping pointers\n");
	//swap 1
	int *temp1 = p ;
	p = r ;
	r = temp1 ;
	//swap 2
	int *temp2 = q ;
	q = r ;
	r = temp2 ;
	printf(" x = %d \n y = %d \n z = %d \n p = %p \n q = %p \n r = %p \n *p = %d \n *q = %d \n *r = %d",x,y,z,p,q,r,*p,*q,*r);

	
	
}
