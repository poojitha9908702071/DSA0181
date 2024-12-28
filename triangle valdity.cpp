#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;

    cout << "Enter the three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    if ((angle1 + angle2 + angle3) == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        cout << "The angles form a valid triangle." << endl;
    } 
    else {
        cout << "The angles do not form a valid triangle." << endl;
    }

    return 0;
}
