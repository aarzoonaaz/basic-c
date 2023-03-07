// Calculate sum of n natural nos.
#include<stdio.h>
int main()
{
	int sum(int);
	int a,b;
	printf("\n enter a no");
	scanf("%d",&a);
	b=sum(a);
	printf("\n sum=%d",b);
}
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return n+sum(n-1);
	
	
}
