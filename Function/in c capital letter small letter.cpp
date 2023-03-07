//Include a charater and check capital letter,small letter and digit
#include<stdio.h>
int main()
{
	char c;
	printf("\n enter a character");
	scanf("%c",&c);
	if(c>=65 && c<=90){
		printf("\n upper case");
	}
	else if(c>=97 && c<=122){
		printf("\n lower case");
	}
	else if(c>=48 && c<=57){
		printf("\n digit");
	}
	else{
	printf("\n special character");
}
 } 
