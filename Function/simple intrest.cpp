//Calculate simple intrest:
#include<stdio.h>
int main()
{
	float si(float,float,float);
	float p,t,r,s;
	printf("\n enter principal,time and rate");
	scanf("%f%f%f",&p,&t,&r);
	s=si(p,t,r);
	printf("\n si=%f",s);
}
float si(float p, float r,float t)
{
	float s=(p*r*t)/100;
	return s;
}
