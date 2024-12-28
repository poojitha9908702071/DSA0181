#include<iostream>
using namespace std;
int main(){
	int m1,m2,m3;
	cout<<"enter the mark1:";
	cin>>m1;
	cout<<"enter the mark2:";
	cin>>m2;
	cout<<"enter the mark3:";
	cin>>m3;
	int sum=m1+m2+m3;
	cout<<"sum="<<sum;
	int avg=sum/3;
	cout<<"avg:"<<avg;
	if(avg>=75){
		cout<<"a grade";
	}
	else if(avg>=60 && avg<75){
		cout<<"b grade";
	}
	else if(avg>=50 && avg<60){
		cout<<"c grade";
	}
	else{
		cout<<"fail";
	}
}