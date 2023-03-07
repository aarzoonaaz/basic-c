//calculate sum,average and of 3 subject
#include<stdio.h>
int main()
{
	int a,b,c,d;
	float avg;
	printf("\n enter 3 subject");
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	avg=d/3;
	if (avg>=90)
	printf("\n grade A");
	else if(avg>=80 && avg<90)
	printf("\n grade B");
	else if(avg>=70 && avg<80)
	printf("\n grade C");
	else if(avg>=60 && avg<70)
	printf("\n grade D");
	else if(avg>=50 && avg<60)
	printf("\n grade E");
	else if(avg>=40 && avg<50)
	printf("\n grade F");
	else if(avg>=30 && avg<40)
	printf("\n grade G");
	else if(avg>=20 && avg<30)
	printf("\n grade H");
	else if(avg>=10 && avg<20)
	printf("\n grade I");
	else
	printf("\ fail");
	printf("\n total=%d",d);
	printf("\n average=%f",avg);
	
}
