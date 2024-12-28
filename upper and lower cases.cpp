#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class StringCase{
	public:
	void toUpper(string str){
		transform(str.begin(),str.end(),str.begin(),::toupper);
		cout<<"the string is:"<<str<<endl;
	}
	void toLower(string str){
		transform(str.begin(),str.end(),str.begin(),::tolower);
		cout<<"the string is:"<<str<<endl;
	}
};
int main(){
	StringCase convert;
	string input;
	cout<<"enter the input";
	cin>>input;
	convert.toUpper(input);
	convert.toLower(input);
}
