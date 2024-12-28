#include<iostream>
using namespace std;
class box{
	private:
		int width;
		int length;
public:
	box(int l,int w){
	width=w;
	length=l;	
	}
	void display(){
		cout<<"length:"<<length<<endl;
		cout<<"width:"<<width;
	}
};
int main(){
	box b1(2,3);
	b1.display();
}