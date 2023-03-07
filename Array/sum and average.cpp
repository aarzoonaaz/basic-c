//Input in an 1D array and calculate its sum and average
#include<stdio.h>
int main()
{
	int a[5],n,i,sum=0; float avg;
	printf("\n enter the value of n");
	scanf("%d",&n);
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("\n sum=%d",sum);
	printf("\n avg=%f",avg);
}
