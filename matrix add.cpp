#include<iostream>
using namespace std;
int main(){
int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
int b[3][3]={{1,1,1},{2,1,2},{3,2,1}};
int c[3][3]={{0,0,0},{0,0,0},{0,0,0}};
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		c[i][j]=a[i][j]+b[i][j];
	}
}
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<c[i][j]<<" ";
	}
	cout<<endl;
}
return 0;
}
