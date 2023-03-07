// Check the given no.is co prime or not:
#include<stdio.h>
int main()
{
	int coprime(int,int);
	int a,b,c;
	printf("\n enter 2 number");
	scanf("%d%d",&a,&b );
	c=coprime(a,b);
	if (c==1) 
	printf("\n co-prime no.");
	else
	printf("\n not");
}
int coprime(int a, int b)
{
	int i,min;
	min=a<b?a:b;
	for(i=2;i<=min;i++)
	{
		if(a%i==0 && b%i==0)
		return 0;
	}
	return 1;
}
