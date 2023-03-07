#include<stdio.h>
int main()
{
	char s[100];
	int i,v=0;
	printf(" enter the string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a' || s[i]=='A' || s[i]=='E' || s[i]=='e' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='U'|| s[i]=='u')
		v=v+1;
	}
	printf("vowels=%d",v);
	
}
