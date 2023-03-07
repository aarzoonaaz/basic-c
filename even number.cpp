/*#include<stdio.h>
int main()
{
	int i=2;
	for(i=2;i<=100;i=i+2)
	{
		printf("%4d",i);
	}
}
*/
/*#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n sum=%d",sum);
	
}
*/
//Input a number and display factors:
/*#include<stdio.h>
int main()
{
	int n,i;
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if (n%i==0)
		printf("%d",i);
	}
}
*/
//Perfect number:
/*#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		sum=sum+1;
		printf("\n sum=%d",sum);
	}
		if(sum==n)
		printf("\n perfect no:");
		else 
		printf("\n not a perfect no:");
}
*/
// prime number:
/*#include<stdio.h>
int main()
{
	int i,n,c=0;
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
		if(c==2)
		printf("\n prime");
		else
		printf("\n not prime");
		
}
*/
// table:
#include<stdio.h>
int main()
{
	int n,i;
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n %d*%d=%d",n,i,n*i);
	}
}
