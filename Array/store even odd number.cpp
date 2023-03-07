#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int a[20],i;
  srand(time(0));
  for(i=0;i<20;i++)
  {
  	a[i]=rand()%100;
  	printf("%4d",a[i]);
  }  
  printf("\n even nos are :");
  for(i=0;i<20;i++) {
  if(a[i]%2==0)
  {
  	printf("%4d",a[i]);
  }
}
  printf("\n odd nos are :");
  for(i=0;i<20;i++) {
  if(a[i]%2==1)
  {
  	printf("%4d",a[i]);
  }
}
}
