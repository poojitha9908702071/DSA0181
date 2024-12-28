#include<iostream>
using namespace std;
int main(){
	int n=12,m=90,l=80;
	if(n>m&&n>l){
		cout<<n<<" greater";
	}
	else if(m>n&&m>l){
		cout<<m<<" greater";
	}
	else if(l>n&&l>m){
		cout<<l<<" greater";
	}
}