/*#include<iostream>
using namespace std;
int main()
{
	cout<<"namaste dunia"<<endl;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if (a>0){
		cout<< "a is positive"<<endl;
	}
	else 
	{
		cout<< "a is negative"<<endl;
	}
}*/
/*#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a >>b;
	if(a>b){
		cout<<"A is greater"<<endl;
	}
	if (b>a){
		cout<<"B is greater"<<endl;
	}
}
*/
// positive negative zero usinf if else:
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>0){
		cout<< " positive " << n<< endl;
	}
	else if
	(n<0){
		cout<< " negative " << n<< endl;
	}
	else
	{
		cout<< " zero"<< n << endl;	}
}*/
// number print 1-n:
/*#include<iostream>
using namespace std;
int main()
{
	int n,i=1; 
	cin>>n;
	while(i<=n){
		cout<<i<<" ";
		i++;
	}
	
	}*/
// sum of natural numbers using while loop:
/*#include<iostream>
using namespace std;
int main()
{
	int n,i=1,sum=0;
	cin>>n;
	while(i<=n){
		sum=sum+i;
		i=i+1;
	}
	cout<<sum<<" ";
	}
	*/
	//sum of all even numbers:
/*#include<iostream>
using namespace std;
int main()
{
	int n,i=2,sum=0;
	cin>>n;
	while(i<=n)
	{
		sum=sum+i;
		i=i+2;
	}
	cout<<sum<<" ";
	}*/
/*	#include<iostream>	
	using namespace std;
	int main()
	{
		int n,i=1;
		cin>>n;
		while(i<=10){
		cout<< n <<" * "<< i << " = "<< n*i <<endl;
		i++;
	}
	}*/
/*	#include<iostream>
	using namespace std;
	int main()
	{
		int n, i=2;
		cin>>n;
		while(i<n)
		{
			if(n%i==0)
			{
				cout<<"not prime"<<i<<endl;
			}
			else{
				cout<<"prime"<<i<<endl;
			}
			i=i+1;
		}
	}*/
/*	#include<iostream>
	using namespace std;
	int main()
	{
		int n,i;
		cin>>n;
		while(i<=n)
		{
		cout<<"aarzoo"<<endl;
		i++;
		}
	}
	*/
	/*
	***
	***
	***
	#include<iostream>
	using namespace std;
	int main()
	{
		int n,i=1;
		cin>> n;
		while(i<=n){
			int j=1;
			while(j<=n){
				cout<<" * ";
				j++;
			}
		cout<<endl;
		i++;
		}
	}*/
	/*111
	222
	333	#include<iostream>
	using namespace std;
	int main()
	{
		int n,i=1;
		cin>> n;
		while(i<=n){
			int j=1;
			while(j<=n){
				cout<< i;
				j++;
			}
			cout<<endl;
			i++;
		}
	}*/
	
/*123
123
123
#include<iostream>
	using namespace std;
	int main(){
		int n;
		cin>>n;
		int i=1;
		while(i<=n){
			int j=1;
			while(j<=n){
				cout<<j;
				j++;
			}
			cout<<endl;
			i++;
		}
	}
*/ 
/*
321
321
321
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
	int j=1;
	while(j<=n){
		cout<<n-j+1;
		j++;
	}cout<<endl;
	i++;}
}
*/
/*
123
456
789
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int count=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<count<<" ";
			count++;
			j++;
		}
		cout<<endl;
		i++;
	}
}
*/ 
/* 
*
**
***
****
*****
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int col=1;
		while(col<=row){
			cout<<" * ";
			col++;
			
		}
		cout<<endl;
		row++;
	}
}*/
/*
1
22
333
4444
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<i;
			j++;
		}
		cout<<endl;
		i++;
	}
}*/
/*
1
2 3
4 5 6
7 8 9 10
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int count=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<count<<" ";
			count++;
			j++;
		}
		cout<<endl;
		i++;
	}
}
*/
/*
1
2 3
3 4 5
4 5 6 7
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		int count=i;
		while(j<=i){
			cout<<count;
			count++;
			j++;
		}
		cout<<endl;
		i++;
	}
}*/ 
/*
1
2 1
3 2 1
4 3 2 1
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<i-j+1;
			j++;
		}
		cout<<endl;
		i++;
	}
} */ 
/*
A A A
B B B
C C C
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			char ch='A'+i-1;
			cout<<ch<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
} */ 
/*
A B C
A B C
A B C
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			char ch='A'+j-1;
			cout<<ch<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
}*/
/*
A B C
D E F
G H I
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	char count='A';
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<count<<" ";
			count++;
			j++;
		}
		cout<<endl;
		i++;
	}
}*/
/*
A B C
B C D 
C D E
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			char ch='A'+i+j-2;
			cout<< ch;
			ch++;
			j++;
			
		}
		cout<<endl;
		i++;
	}
}*/
/*
A 
B B
C C C
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			char ch='A'+i-1;
			cout<<ch<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
}
*/
/*
A
B C
C D E
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			char ch='A'+i+j-2;
			cout<<ch;
			ch++;
			j++;
		}
		cout<<endl;
		i++;
	}
}	*/
/*
A
BC
CDE
FGHI
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	int i=1;
	char ch='A';
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<ch;
			ch++;
			j++;
		}
		cout<<endl;
		i++;6
	}
}*/
/*
D
CD
BCD
ABCD
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	int i=1;
	while(i<=n){
		int j=1;
		char ch='A'+n-i;
		while(j<=i){
			cout<< ch;
			ch++;
			j++;
		}
		cout<<endl;
		i++;
	}
}*/ 
/*
    *
   **
  ***
 ****    
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	int i=1;
	while(i<=n){
		int space=n-i;
		while(space){
			cout<<" ";
			space--;
		}
	
		int j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
}
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>> n;
	for(int i=1; i<=n; i++){
		for(int star=1; star<=n-i+1; star++){
		}
		for(int j=1; j<=i; j++){
			cout<< " *";
		}
		cout<<endl;
	}
}

