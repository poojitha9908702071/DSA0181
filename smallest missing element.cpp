#include<iostream>
using namespace std;
int main(){
	int arr[]={0,1,2,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int s=arr[0];
	int i=0;
	while(i<n&&arr[i]==s+i){
		i++;
	}
	cout<<"smallerst missing element:"<<s+i<<endl;

	}