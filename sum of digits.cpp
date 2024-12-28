#include<iostream>
using namespace std;
int main(){
	int n,dig,sum=0;
	cout<<"enter the number:";
	cin>>n;
	while(n>0){
		dig=n%10;
		sum+=dig;
		n=n/10;
	}

		cout<<"sum of digits:"<<sum;
	}
	