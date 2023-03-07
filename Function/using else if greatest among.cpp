// Greatest among 3 nos:
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter 3 nos");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("\n greatest no=%d",a);
	}
	else if(b>a && b>c)
	{
		printf("\n greatest no=%d",b);
	}
	else
	{
		printf("\n greater no=%d",c);
	}
}
