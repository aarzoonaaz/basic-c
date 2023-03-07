//Greatest among 2 nos:
#include<stdio.h>
int main()
{
	int max(int,int);
	int a,b,c;
	printf("\n enter 2 nos");
	scanf("%d%d",&a,&b);
	c=max(a,b);
	printf("\n greater no=%d",c);
}
 int max(int x,int y)
 {
 	if(x>y)
 	return x;
 	else
 	return y;
 }
