#include<stdio.h>
int main()
{
	int n,c=0;
	do{
		printf("\n enter the a no ");
		scanf("%d",&n);
		if(n>0)
		c=c+1;
		
	}while(n!=0);
	printf("\n the positive count is %d ",c);
}
