#include<iostream>
using namespace std;
int main(){
	string data="pooji",temp;
	int len;
	len=data.length()-1;
	while(len>=0){
		temp+=data[len];
		len--;
	}
	cout<<temp;
}