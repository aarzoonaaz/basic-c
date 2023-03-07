//Input a no and display its factors
//Ex : 10  output : 1,2,5,10
#include<stdio.h>
int main()
{
	int i,n;
	printf("\n enter the numbres");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d,",i);
	}
}
