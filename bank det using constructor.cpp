#include<iostream>
using namespace std;
class bd{
	private:
		string actnme;
		double bal;
		public:
		 bd(string name,double amt){
		 actnme=name;
		 bal=amt;
		 cout<<"amount in"<<actnme<<"is"<<bal<<endl;
	}
	void disdet(){
		cout<<"name:"<<actnme;
		cout<<"bal:"<<bal;
	}
};
int main(){
	bd a("john",500.0);
	a.disdet();
	}