// Calculate sum and average 3 subject marks:
#include<stdio.h>
int main()
{
	void calc(int,int,int);
	int a,b,c;
	printf("\n enter 3 sub marks");
	scanf("%d%d%d",&a,&b,&c);
	calc(a,b,c);
	
}
void calc(int a, int b, int c)
{
	int t=a+b+c;
	float avg =t/3;
	printf("\n total=%d",t);
	printf("\n avg=%f",avg);
}
