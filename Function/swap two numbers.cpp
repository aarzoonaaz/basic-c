//Swap two numbers:
#include<stdio.h>
int main()
{
	void swap(int,int);
	int a,b;
	printf("\n enter 2 nos");
	scanf("%d%d",&a,&b);
	printf("\n Before swap a=%d and b=%d",a,b);
	swap(a,b);
}
void swap(int x,int y)
{
	int t=x;
	x=y;
	y=t;
	printf("\n After swap a=%d and b=%d",x,y);
}
