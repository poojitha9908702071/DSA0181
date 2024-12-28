#include<iostream>
using namespace std;
class a{
public:
int add(int a,int b){

return a+b;
}	
int add(int a,int b,int c){

return a+b+c;
}
};
int main(){
	a a1;
	cout<<a1.add(1,2);
	cout<<a1.add(1,2,3);
}
