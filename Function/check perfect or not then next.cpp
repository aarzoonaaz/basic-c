//Input a number and check whether it is perfect or not.If not then display next perfect no.:
#include<stdio.h>
int main()
{
	int perfect(int);
	int n,i,sum=0;
	printf("\n enter a no.");
	scanf("%d",&n);
	sum=perfect(n);
	if(sum==n){
	printf("\n perfect number");
}
else{
	for(i=n+1;;i++)
	{
		sum=perfect(i);
		if(i==sum)
		{
			printf("\n next perfect no=%d",i);
			break;
		}
	}
}
}
int perfect(int n)
{
	int i,s=0;
	for(i=1;i<=n/2;i++)
	{
	if(n%i==0)
	s=s+i;	
	}
	return s;
}
