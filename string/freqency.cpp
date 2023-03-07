#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i,count[5]={0,0,0,0,0};
	char ch[]={'A','E','I','O','U'};
	printf("\n enter the string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		switch(toupper(s[i]))
		{
			case 'A': count[0]++; break;
			case 'E': count[1]++;break;
			case 'I': count[2]++;break;
			case 'O': count[3]++;break;
			case 'U': count[4]++;break;
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n %c \t %d",ch[i],count[i]);
	}
}
