#include<iostream>
using namespace std;
int main(){
	int n,dig,rev=0;
	cout<<"enter the number:";
	cin>>n;
	int temp=n;
	while(n>0){
		dig=n%10;
		rev=rev*10+dig;
		n=n/10;
	}
		cout<<"reverse number:"<<rev;
	}
