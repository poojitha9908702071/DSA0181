#include<iostream>
using namespace std;
int main(){
	int i,a=0,b=1,c=0,n;
	cout<<"enter n value";
	cin>>n;
	for(i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c<<endl;
}