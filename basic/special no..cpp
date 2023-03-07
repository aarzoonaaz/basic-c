//special number
//145=1+4+5
//1+24+120
//=145
#include<stdio.h>
int main()
{
	int n,t,s=0,f,a;
	t=n;
	do{
		a=n%10;
		f=1;
		do{
			f=f*a;
			a--;
		}while(a>0);
		s=s+f;
		n=n/10;
	}while(n>0);
	if(t==s)
	printf("\n special no.");
	else
	printf("\n not");
	
}
