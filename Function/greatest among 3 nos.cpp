//greatest among 3 nos:
#include<stdio.h>
int main()
{
	int max(int,int,int);
	int a,b,c,d;
	printf("\n enter 3 nos");
	scanf("%d%d%d",&a,&b,&c);
	d=max(a,b,c);
	printf("\n greatest no=%d",d);
}
	int max(int x,int y,int z)
	{
		if(x>y && x>z)
		return x;
		else if(y>x && y>z)
		return y;
		else
		return z;
	}
