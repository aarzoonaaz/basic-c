//Input time in seconds and convert it into hours,minutes, and second
#include<stdio.h>
int main()
{
	int h,m,s;
	printf("\n enter the seconds");
	scanf("%d",&s);
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf("\n hours=%d,minutes=%d,second=%d",&h,&m,&s);
	
}
