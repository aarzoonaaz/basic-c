// Calculate gcd of two 
#include<stdio.h>
int main()
{
	int gcd(int,int);
	int a,b,c;
	printf("\n enter 2 nos");
	scanf("%d%d",&a,&b);
	c=gcd(a,b);
	printf("\n GCD =%d",c);
}
int gcd(int a,int b)
{
	if(a%b==0)
	return b;
	else
	return gcd(b,a%b);
}
