#include<stdio.h>
int main()
{
	int marks[5];
	for(int i=1;i<=5;i++)
	{
		printf("\n enter the value of marks for student %d",i+1);
		scanf("%d",&marks[i]);
	}
	for(int i=1;i<=5;i++)
	{
		printf("\n enter the value of marks for student %d is %d:",i+1,marks[i]);
	}
}
