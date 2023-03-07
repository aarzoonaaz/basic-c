//Factorial
#include<stdio.h>
int main()
{
	int fact(int);
	int a,b;
	printf("\n Enter a No:");
	scanf("%d",&a);
	b=fact(a);
	printf("\n Factorial =%d",b);
}
int fact(int n)
{
	if(n==0) //Base Case
	return 1;
	else
	return n*fact(n-1);
}
