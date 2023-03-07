#include<stdio.h>
int main()
{
	int a,n,r;
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
	
	a=n%10;
	r=r*10+a;
	n=n/10;
}
	printf("\n reverse=%d",r);
	
}
