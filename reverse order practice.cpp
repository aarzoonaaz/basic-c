#include<stdio.h>
int main()
{
	int a,n,r=0;
	printf("\n enter the value of n");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
		printf("\n reverse no=%d",r);
	}
}
