#include<stdio.h>
int main()
{
	int a[10]={0};
	int n,rem;
	printf("\n enter the value of n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		if(a[rem]==1)
		break;
		a[rem]=1;
		n=n/10;
	}
	if(n>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
