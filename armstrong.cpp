#include<iostream>
using namespace std;
int main(){
	int n,dig,sum=0;
	cout<<"enter the number:";
	cin>>n;
	int temp=n;
	while(n>0){
		dig=n%10;
		sum+=dig*dig*dig;
		n=n/10;
	}
	if(sum==temp){
		cout<<"armstrong";
	}else{
		cout<<"not armstrong";
	}
	}
