//Into in 1D array and count no. of even or odd items:
#include<stdio.h>
int main()
{
	int a[10],n,i,c1=0,c2=0;
	printf("\n enter the value of n");
	scanf("%d",&n);
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		c1++;
		else
		c2++;
	}
	printf("\n c1=%d",c1);
	printf("\n c2=%d",c2);
	
}
