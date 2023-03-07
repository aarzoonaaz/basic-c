// display all 3 digit prime nos:
#include<stdio.h>
int main()
{
	int prime(int);
	int i,n;
	for(i=100;i<=999;i++)
	{
		n=prime(i);
		if(n==1)
		printf("%4d",i);
	}
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
