#include<iostream>
using namespace std;
int main(){
	cout<<"1.add"<<endl<<"2.sub"<<endl<<"3.mul"<<endl<<"4.div";
	int choice,n1=2,n2=2;
	cout<<"enter choice:"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"result:"<<n1+n2;
			break;
				case 2:
			cout<<"result:"<<n1-n2;
			break;
				case 3:
			cout<<"result:"<<n1*n2;
			break;
				case 4:
			cout<<"result:"<<n1/n2;
			break;
			default:
				cout<<"invalid";
}
}