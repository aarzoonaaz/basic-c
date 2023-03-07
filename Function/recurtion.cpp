#include<stdio.h>
void printpattern(int n);
int main()
{
	int n=3;
	printpattern(n);
	return 0;
}
void printpattern(int n){
	if(n==1)
	printpattern(n-1);
	for(int i=0;i<(2*n-1);i++){
		printf("*");
	}
	printf("\n *");
}
