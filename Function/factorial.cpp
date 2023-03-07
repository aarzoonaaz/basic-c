// Calulate factorial:
#include<stdio.h>
int main()
{
	int factorial(int);
	int n,f=1,fac;
	printf("\n enter a no");
	scanf("%d",&n);
	fac=factorial(n);
	printf("\n factorial=%d",fac);
}
	int factorial(int n)
	{
		int f=1;
		while(n>=1)
		{
			f=f*n;
			n--;
		}
		return f;
	}
