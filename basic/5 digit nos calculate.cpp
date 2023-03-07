//Input a 5 digit nos and calculate:
#include<stdio.h>
int main()
{
	int a,n,sum=0;
	printf("\n enter a 5 digit no.");
	scanf("%d",&n);
	a=n%10;
	sum=sum+a;
	a=n/10000;
	sum=sum+a;
	printf("\n sum=%d",sum);
}
