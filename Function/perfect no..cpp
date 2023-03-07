//Check the given no. perfect or not:
#include<stdio.h>
int main()
{ 
	int perfect (int);
	int n,a,sum=0;
	printf("\n enter a no.");
	scanf("%d",&n);
	sum=perfect(n);
	if(sum==n)
	printf("\n perfect no.");
	else
	printf("\n not perfect no.");
}
int perfect (int n)
{
	int i,s=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		s=s+i;
	}
	return s;
}
