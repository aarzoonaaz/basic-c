// Check the given no. is palindrome or not
#include<stdio.h>
int main()
{
	int n,a,r=0,t;
		printf("\n enter number");
		scanf("%d",&n);
		t=n;
	do{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}while(n>0);

	if(t==r)
printf("\n palindrome");
else
printf("\n not");
}
	
