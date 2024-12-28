#include <iostream>
using namespace std;
int main() {
    int units=100;
    double bill = 00.0;
    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 300) {
        bill = (100 * 5) + ((units - 100) * 8);
    } 
    else {
        bill = (100 * 5) + (200 * 8) + ((units - 300) * 10);
    }
    cout << "Total electricity bill: " << bill << endl;

    return 0;
}
