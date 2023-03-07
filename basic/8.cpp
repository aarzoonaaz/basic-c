//calculate sum of even nos and product of odd nos from 1-10
#include<stdio.h>
int main()
{
	int i=1,sum=0,p=1;
	while(i<=10){
	if(i%2==0)
	sum=sum+i;
	else
	p=p*i;
	i++;
}
	printf("\n sum=%d",sum);
	printf("\n product=%d",p);
}

