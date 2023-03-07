#include<stdio.h>
void input(int a[][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void output(int a[][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
void sum(int a[][10],int b[][10],int c[][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
void product(int a[][10],int b[][10],int c[][10],int m,int n)
{
	int i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			c[i][j]+=a[i][k]*b[k][j];
		}
	}
}
int main()
{
	int i,j,m,n;
	int a[10][10],b[10][10],c[10][10];
	printf("\n enter the value of m and n");
	scanf("%d%d",&m,&n);
	printf("\n enter the elements in first matrix:");
	input(a,m,n);
	printf("\n enter the elements in second matrix:");
	input(b,m,n);
	printf("\n FIRST MATRIX \n");
	output(a,m,n);
	printf("\n SECOND MATRIX:\n");
	output(b,m,n);
	sum(a,b,c,m,n);
	printf("\n SUM OF 2 MATRIX:\n");
	output(c,m,n);
	product(a,b,c,m,n);
	printf("\n PRODUCT OF 2 MATRIX:\n");
	output(c,m,n);
	
	
	
	
}
