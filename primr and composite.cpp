#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number:";
	cin>>n;
	int count;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			 count++;
		}
	}
	if(count==2){
		cout<<"prime number";
	}
	else{
		cout<<"composite number";
	}
}