/*calculate sum of first 10 natural number
#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=10)
	{
		sum=sum+i;
	i++;
	}
		printf("\n sum %d",sum);
}
*/
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("\n enter the value of n");
	scanf("%d",&n);
	{
		for(i=1;i<n;i++)
		sum=sum+i;
		printf("\n sum=%d",sum);
	}
	
}
