//Input a 3 digit and reverse:
#include<stdio.h>
int main()
{
	int n,a,r=0;
	printf("\n enter 3 digit no");
	scanf("%d",&n);
	a=n%10;
	r=r*10*a;
	n=n/10;
	a=n%10;
	r=r*10*a;
	n=n/10;
	a=n%10;
	r=r*10*a;
	printf("\n reverse no=%d",r);
}
