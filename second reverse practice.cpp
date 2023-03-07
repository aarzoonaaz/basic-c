#include<stdio.h>
int main()
{
int i,n;
 int a[n];
 printf("\n enter the number you want to reverse :");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 printf("\n");
 for(i=n-1;i>=0;i--)
 {
 	printf("%d",a[i]);
 }
}
