#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[] = {9,8,7,9,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 0; 
	sort(arr,arr+n);
    for (int i = 1; i < n; i++)
        if (arr[i] != arr[k])
            arr[++k] = arr[i];
    cout << "Array after removing duplicates: ";
    for (int i = 0; i <= k; i++)
        cout << arr[i] << " ";
    return 0;
}
