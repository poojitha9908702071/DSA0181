#include<iostream>
using namespace std;
int main(){
	int arr[]={1,8,9,0,2,6,9,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int m=0,mf;
	for(int i=0;i<n;i++){
		int f=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
			f++;
		}
	}
	if(f>m){
		m=f;
		mf=arr[i];
			}
		}
			cout<<mf;
}