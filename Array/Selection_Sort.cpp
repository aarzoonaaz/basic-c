#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,small,tmp;
	for(i=0;i<n;i++)
	{
		small=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[small])
			{
				small=j;
			}
		}
		if(small!=i)
		{
			tmp=a[i];
			a[i]=a[small];
			a[small]=tmp;
		}
	}
}
void output(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}
void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

}
int main()
{
	int a[10],n;
	printf("\n Enter the size:");
	scanf("%d",&n);
	printf("\n Enter the elements :");
	input(a,n);
	printf("\n Original Array :\n");
	output(a,n);
	sort(a,n);
	printf("\n Sorted Array :\n");
	output(a,n);
	
}

