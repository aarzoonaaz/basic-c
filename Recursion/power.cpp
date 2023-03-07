//Calculate x^n:
#include<stdio.h>
int main()
{
	int power(int,int);
	int a,b,x;
	printf("\n enter 2 nos");
	scanf("%d%d",&a,&b);
	x=power(a,b);
	printf("\n power=%d",x);
	}
	int power(int a,int b)
	{
	if (b==0)
	return 1;
	else
	return	a*power (a,b-1);
	
}
