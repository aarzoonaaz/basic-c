//Calculate simple interest
#include<stdio.h>
int main()
{
	int p,r,t,si;
	printf("\n enter p,r and t");
	scanf("%f%f%f,&p,&r,&t");
	si=(p*r*t)/100;
	printf("\n simple interest=%f",si);
}
