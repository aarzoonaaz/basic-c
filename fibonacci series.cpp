//Fabonacci series:
#include<stdio.h>
int fibonacci(int);
int main()
{
	int n,i;
	printf("\n enter a number");
	scanf("%d",&n);
	printf("\n fibonacci series is:");
	for(int i=0;i<n;i++)
	{
		printf("%d",fibonacci(i));
	}
	int fibonacci(int i);
	{
		if(n==0)
		return 0;
		else if(n==1)
		return 1;
		else
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}
