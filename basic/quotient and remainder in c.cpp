//input 2 nos and display this quotient and remainder
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("\n enter 2 nos");
	scanf("%d%d",&a,&b);
	c=a/b;d=a%b;
	printf("\n quotient=%d",c);
	printf("\n remainder=%d",d);
}
