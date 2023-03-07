#include<stdio.h>
int main()
{
	int a,n,sum=0,t;
	printf("\n enter the value of n");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
	a=n%10;
	sum=sum+(a*a*a);
	n=n/10;
	}
 (t==sum);
 printf("\n armstrong=%d,armstrong");
}
