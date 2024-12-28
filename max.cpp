#include<iostream>
using namespace std;
class large{
	public:
		int a=70;
		int b=80;
		int c=60;
		void find_max(){
			if(a>b && a>c){
				cout<<a;
			}
			else if(b>a&&b>c){
				cout<<b;
			}
			else{
				cout<<c;
			}
		}
};
int main(){
	large l;
	l.find_max();
}