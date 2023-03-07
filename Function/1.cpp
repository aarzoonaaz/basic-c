//sum of 2 nos
#include<stdio.h>
int main()
{
	int sum(int,int); //prototype
	int a,b,c;
	printf("\n Enter 2 nos:");
	scanf("%d%d",&a,&b);
	c=sum(a,b); //calling
	printf("\n Sum =%d",c);
}
//Defination
	int sum(int x,int y)
	{
		int s=x+y;
		return s;
	}
	
