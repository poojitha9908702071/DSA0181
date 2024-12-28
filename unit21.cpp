#include<iostream>
using namespace std;
int main(){
	int arr[]={10,15,25,10};
	int A=10;
	int n=4;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	cout<<sum+A;
}