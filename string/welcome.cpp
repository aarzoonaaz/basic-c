#include<stdio.h>
int main()
{
	 char s[100];
	 int i;
	 printf("\n enter a string");
	 gets(s);
	 for(i=0;s[i]!='\0';i++)
	 {
	 	printf("%c-",s[i]);
	  } 
}
