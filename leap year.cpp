#include<iostream>
using namespace std;
int main(){
	int y=2019;
	if((y%4==0&&y%100!=0)||(y%400==0)){
		cout<<"leap year";
	}
	else{
		cout<<"not leap";
	}
}