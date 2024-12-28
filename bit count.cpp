#include<iostream>
using namespace std;
int main(){
	int n=2,m=13;
	if(n<0){
		cout<<"invalid";
	}
	else{
		m=m|(1<<n);
	}
	cout<<m;
}