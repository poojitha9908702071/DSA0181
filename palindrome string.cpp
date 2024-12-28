#include<iostream>
using namespace std;
int main(){
	string data="madam",temp;
	int len;
	len=data.length()-1;
	while(len>=0){
		temp+=data[len];
		len--;
	}
	if(data==temp){
		cout<<"palindrome";
	}
	else{
		cout<<"not palindrome";
	}
}