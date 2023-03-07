//Print multipication table of a given no. upto 10 lines
#include<stdio.h>
int main()
{
	int i,n;
	printf("\n enter numbers");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n %d\t x \t %d \t =\t %d",n,i,n*i);
	}
}
