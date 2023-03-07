//check the given number divisible by both 5 and 7:
#include<stdio.h>
int main()
{
	int number;
	printf("\n enter number");
	scanf("%d",&number);
	if(number%5==0 && number%7==0)
	{
		printf("\n divisible");
	}
	else{
		printf("\n not divisible");
	}
}
