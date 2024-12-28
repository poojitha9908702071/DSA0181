#include<iostream>
using namespace std;
int main(){
	string data="pooji*123";
	int v=0,c=0,d=0,sp=0;
	for(int i=0;i<data.length();i++){
		if((data[i]>='a')&&(data[i]<='z')){
			if(data[i]=='a'||data[i]=='e'||data[i]=='i'||data[i]=='o'||data[i]=='u'){
				v=v+1;
			}
			else{
				c=c+1;
			}
		}
		else if((data[i]>='0')&&(data[i]<='9')){
			d=d+1;
		}
		else{
			sp=sp+1;
		}
	}
	cout<<"vowels:" <<v<<endl<<"digits:"<<d<<endl;
	cout<<"cont"<<c<<endl<<"sc:"<<sp;
	return 0;
}