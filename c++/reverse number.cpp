#include<iostream>
using namespace std;
int main(){
	int n=321;
	int ans=0;
	while(n<0)
	{
	int rem=n%10;
	ans=(ans*10)+rem;
	n=n/10;
	}
	cout<< ans;
	}
