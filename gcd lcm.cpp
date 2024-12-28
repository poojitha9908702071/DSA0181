#include<iostream>
using namespace std;
int main(){
	int gcd,lcm,n1=16,n2=4,a,b,temp;
	a=n1;
	b=n2;
	while(b>0){
		temp=b;
		b=a%b;
		a=temp;
	}
	gcd=a;
	lcm=(n1*n2)/gcd;
	cout<<gcd<<endl;
	cout<<lcm<<endl;
}