#include <iostream>
#include <string>
using namespace std;
class Employee {
    string name, emp_id, address, email, mobile_no;

public:
    void setDetails() {
        cout << "Enter Name of the Employee: ";
        getline(cin, name);
        cout << "Enter Address of the Employee: ";
        getline(cin, address);
        cout << "Enter ID of the Employee: ";
        getline(cin, emp_id);
        cout << "Enter Mobile Number: ";
        getline(cin, mobile_no);
        cout << "Enter E-Mail ID of the Employee: ";
        getline(cin, email);
    }
};

class Programmer : public Employee {
    float basic_pay;

public:
    void setBasicPay() {
        cout << "Enter the Basic Pay of the Programmer: ";
        cin >> basic_pay;
        float da = 0.97 * basic_pay;      
        float hra = 0.10 * basic_pay;      
        float pf = 0.12 * basic_pay;      
        float club_fund = 0.001 * basic_pay; 
        float gross_pay = basic_pay + da + hra; 
        float net_pay = gross_pay - (pf + club_fund); 

        cout << "\nPROGRAMMER PAYMENT SLIP\n";
        cout << "Basic Pay:n " << basic_pay << "\n";
        cout << "Dearness Allowance: " << da << "\n";
        cout << "House Rent Allowance: " << hra << "\n";
        cout << "Provident Fund: " << pf << "\n";
        cout << "Club Fund: " << club_fund << "\n";
        cout << "Gross Pay: " << gross_pay << "\n";
        cout << "Net Pay: " << net_pay << "\n";
    }
};

int main() {
    Programmer programmer;
    programmer.setDetails();
    programmer.setBasicPay();
    return 0;
}