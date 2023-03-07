//Input days and convert it into year,month and days
#include<stdio.h>
int main()
{
	int y,m,d;
	printf("\n enter no of days");
	scanf("%d",&d);
	y=d/365;
	d=d%365;
	m=d/30;
	m=d%30;
	printf("\n year=%d month=%d days=%d",y,m,d);
}
