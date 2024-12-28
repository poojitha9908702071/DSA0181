#include<iostream>
using namespace std;
int main()
{
	int sum=0,i,n;
	cout<<"enter the value:";
	cin>>n;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		cout<<"perfect";
	}
	else{
		cout<<"not perfect";
	}
}