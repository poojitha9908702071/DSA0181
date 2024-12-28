#include<iostream>
using namespace std;
class car{
	private:
	int id,mar;
	string name;
	static int oc;
public:
	car(int id1,int m,string n){
	id=id1;
	mar=m;
	name=n;	
	}
	void display(){
		cout<<"id:"<<id<<endl;
		cout<<"mar:"<<mar<<endl;
		cout<<"name:"<<name<<endl;
		oc++;
	}
	static void displayoc(){
		cout<<"total number of objects created:"<<oc;
	}
	
};
int car::oc=0;
int main(){
	car c1(101,10,"ferreari");
	c1.display();
		car c2(102,9,"thar");
	c2.display();
	car::displayoc();
}