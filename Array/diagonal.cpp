#include<stdio.h>
int main()
{
	int i,j,n;
	int a[10][10];
	printf("\n enter the size :");
	scanf("%d",&n);
	printf("\n enter the elements :");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\n major diagonal :");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i][i]);
	}
	printf("\n minor diagonal :");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i][n-i-1]);
	}
	
}
