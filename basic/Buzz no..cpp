//Buzz no. or not
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n %7==0 || n %10==7)
	{
		printf("\n buzz");
	}
	else
	{
		printf("\n not");
		
	}
}
