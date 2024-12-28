#include <iostream>
using namespace std;
int main() {
    int num = 12;
    int n=5;

    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
            if (count == n) {
                cout << "The " << n << "-th factor of " << num << " is " << i << endl;
                return 0;
            }
        }
    }

    cout << "The " << n << "-th factor does not exist." << endl;
    return 0;
}
