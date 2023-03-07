#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,r1,r2;
	cout<<" enter the value of 3 no.";
	cin>> a >> b >> c;
	r1=(-b+sqrt(b*b-4*a*c))/(2*a);
	r2=(-b-sqrt(b*b-4*a*c))/(2*a);
	cout<< " enter the value of r1 and r2"<< r1 <<" " << r2;
}
