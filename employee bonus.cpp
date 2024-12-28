#include<iostream>
using namespace std;
int main(){
	char grade;
	double salary,total,bonus;
	cout<<"enter the grade";
	cin>>grade;
	cout<<"enter the salary";
	cin>>salary;
	if(grade=='A'){
		bonus=0.05*salary;
	}
	else if(grade=='B'){
		bonus=0.1*salary;
	}
	if(salary<10000){
		bonus+=0.2*salary;
	}
	total=salary+bonus;
	cout<<"salary:"<<salary;
	cout<<"bonus:"<<bonus;
	cout<<"total:"<<total;
}