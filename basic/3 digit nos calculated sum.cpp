//Input a 3 digit nos and calculated sum
#include<stdio.h>
int main()
{
	int n,a,sum=0;
	printf("\n enter a 3 digit no.");
	scanf("%d",&n);
	a=n%10;
	sum=sum+a;
	n=n/10;
	a=n%10;
	sum=sum+a;
	n=n/10;
	a=n%10;
	sum=sum+a;
	printf("\n sum=%d",sum);
	
}
