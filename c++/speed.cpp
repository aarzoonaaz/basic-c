#include<iostream>
using namespace std;
int main(){
	int v,u,a;
	float s;
	cout<< " enter the value of v";
	cout<< " enter the value of u";
	cout<< " enter the value of a";
	cin>> v>> u >> a;
	s=((v*v)-(u*u))/(2*a);
	cout<< " speed "<< s;
}
