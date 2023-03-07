#include<stdio.h>
int main()
{
 int n,a,r=0,t;
 printf("\n enter the value the n");
 scanf("%d",&n);t=n;
 while(n>0)
 {
 	a=n%10;
 	r=r*10+a;
 	n=n/10;
 }
 if(t==r)
 printf("\n palindrome");
 else
 printf("\n not");
 
}
