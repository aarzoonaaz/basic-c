//Prime or not:
#include<stdio.h>
int main()
{
	int prime(int);
	int a,b;
	printf("\n Enter a No:");
	scanf("%d",&a);
	b=prime(a);
	if(b==1)
	printf("\n Prime No:");
	else
	printf("\n Not a Prime No");
}
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	return c==2;
}
