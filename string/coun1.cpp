#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i,v=0,c=0;
	printf("\n enter the string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(isalpha(s[i]))
		{
			switch(tolower(s[i]))
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u': v++; break;
				default: c++; break;
			}
		}
		
	}
	printf(" vowels=%d consonents=%d",v,c);
}
