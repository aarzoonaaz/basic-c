//Input a character and check whether it is an alphabet,digit or special character.If it is an alphabet then check whether it is in upper or lower case:
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("\n enter a character");
	scanf("%c",&ch);
	if(isalpha(ch))
	{
		if(isupper(ch))
		printf("\n upper case");
		else
		printf("\n lower case");
	}
	else if(isdigit(ch))
	{
		printf("\n digit");
	}
	else
	{
		printf("\n special character");
	}
}
