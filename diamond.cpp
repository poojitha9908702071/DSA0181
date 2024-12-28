#include<iostream>
using namespace std;
int main(){
	int i,j,r=8;
	for(i=0;i<r;i++){
		for(j=(r-i);j>=0;j--){
			cout<<" ";
		}
		for(j=0;j<i;j++){
			cout<<"* ";
		}
		
cout<<endl;
}
for(i=0;i<r;i++){
		for(j=0;j<=i;j++){
			cout<<" ";
		}
		for(int k=0;k<=r-1-i;k++){
			cout<<"* ";
		}
cout<<endl;
}
	return 0;
}