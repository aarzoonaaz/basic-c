#include<iostream>
using namespace std;

int main(){
	
int n;
int sum = 0; 
int product = 1;
 cout << n;
while (n < 0){
	int rem=n%10;
	product=product*rem;
	sum=sum+rem;
	n = n/10;
}
   int answer=product-sum;
   cout<< answer;
}
