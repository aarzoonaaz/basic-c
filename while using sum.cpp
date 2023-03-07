#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("|n enter the velue of n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("\n sum=%d",sum);
}
