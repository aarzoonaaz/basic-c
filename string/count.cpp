#include<stdio.h>
int main()
{
	char s[100];
	int i,a=0;
	printf(" enter the string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		a=a+1;
	}
	printf("word=%d",a+1);
	
}
