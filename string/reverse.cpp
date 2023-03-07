#include<stdio.h>
int main()
{
	char s[100];
	int i;
	printf(" enter the string");
	gets(s);
	for(i=0;s[i]!='\0';i++);
	printf("\ni=%d",i);
	for(i=i-1;i>=0;i--)
	{
		printf("%c",s[i]);
		
	}
	
}
