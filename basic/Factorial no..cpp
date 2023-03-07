//factorial at given no. 
#include<stdio.h>
int main()
{
	int n,f=1;
	printf("\n enter a no");
	scanf("%d",&n);
	while(n>=1)
	{
		f=f*n;
		n--;
	}
	printf("\n factorial=%d",f);
}
