#include<stdio.h>
int main()
{
	int i=34;
	int *j=&i;
	printf("\n the value of i is %d",i);
	printf("\n the value of i is %d",*j);
	printf("\n the address of i is %u",&i);
	printf("\n the address of i is %u",j);
	printf("\n the address of j is %u",&j);
	printf("\n the value of j is %u",*(&j));
	return 0;
}
