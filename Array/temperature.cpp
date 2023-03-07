//Into store 7 days temperature into array calculate average:
#include<stdio.h>
int main()
{
	int temp[7],n,i,sum=0; 
	float avg;
	printf("\n enter the value of n");
	scanf("%d",&n);
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+temp[i];
	}
	avg=sum/n;
	printf("\n sum=%d",sum);
	printf("\n avg=%f",avg);
}
