#include<stdio.h>
int positive(int n);
int main()
{
	int n;
	printf("\n enter the value of n");
	scanf("%d",&n);
	positive(n);
}
int positive(int n)
{
	if(n>0)
	{
		printf("\n positive");
	}
	else if(n==0)
	{
		printf("zero");
	}
	else
	{
		printf("\n negative");
	}
}
