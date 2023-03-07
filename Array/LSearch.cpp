#include<stdio.h>
void search(int a[],int n,int key)
{
	int i,loc=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			loc=i+1;
			printf("\n found at location=%d",loc);
		}
	}
	if(loc==0)
	printf("\n not found");
}
int main()
{
	int a[10],n,i,key;
	printf("\n Enter the size :");
	scanf("%d",&n);
	printf("\n Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the search item:");
	scanf("%d",&key);
	search(a,n,key);
}
