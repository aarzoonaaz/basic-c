#include<stdio.h>
int main()
{
	int i,j,m,n,sum=0;
	int a[10][10];
	printf("\n enter the value of m and n");
	scanf("%d%d",&m,&n);
	printf("\n Enter the elements :");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]%2==0)
			sum+=a[i][j];
		}
	}
	
	printf("\n sum=%d",sum);
}

