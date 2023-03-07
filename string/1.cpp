#include<stdio.h>
int main()
{
	char s[100];
	int i;
	printf(" enter the string");
	gets(s);
	printf("%c.",s[0]);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		printf("%c.",s[i+1]);	
	}
	
}
