//Convert Decimal to Binary:
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[10],i=0;
	printf("\n enter a decimal no");
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	printf("\n Binary=");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	
}
