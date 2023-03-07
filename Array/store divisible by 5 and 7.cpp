//store 50 random values into an 1d array and display 
//those nos that are divisible by 5 or ends with 7
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int prime(int n)
{
	int i;
	if(n==0 || n==1)
	return 0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int a[50],i;
	srand(time(0));
	for(i=0;i<50;i++)
	{
		a[i]=rand()%100;
		printf("%4d",a[i]);
	}
	printf("\n divisible by 5");
	for(i=0;i<50;i++){
		if(a[i]%5==0 || a[i]%10==7){
			printf("%4d",a[i]);
		}
	}
	printf("\ prime no");
	for(i=0;i<50;i++){
		if(prime(a[i])){
			printf("%4d",a[i]);
		}
	}
	
}

