/*#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	sum=sum+i;
}
printf("\n sum=%d",sum);
}
*/
// using function:
#include<stdio.h>
int sum(int n);
int main()
{
	int i,n,sum=0;
	printf("\n enter the value of n");
	scanf("%d",&n);
	sum=(n);
	printf("\n sum=%d",sum);
}
int sum(int n)
{
	for(int i=1;i<=n;i++)
	{
		int s=s+i;
	}
	
}
