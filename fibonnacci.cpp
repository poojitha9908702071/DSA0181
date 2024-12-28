#include<iostream>
using namespace std;
int main(){
	int i,a=0,b=1,c=0,sum=0,n=8;
	for(i=0;i<=n;i++){
		cout<<a<<" "<<endl;
		sum+=a;
		c=a+b;
		a=b;
		b=c;
	}
	cout<<"sum:"<<sum<<endl;
}