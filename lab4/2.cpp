#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    string position;
    double salary;

public:
    // Constructor
    Employee() {
        cout << "Enter employee's name: ";
        cin >> name;
        cout << "Enter the position: ";
        cin >> position;
        cout << "Enter the salary: ";
        cin >> salary;
    }

    // Display function
    void display() {
        cout << "Employee's name: " << name << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: " << salary << endl;
    }

    // Raise salary function
    void raise(int per, string pos) {
        if (position == pos)
            salary += salary * per / 100;
    }
};

int main() {
    string rpos;
    int rper;

    cout << "Add employees:" << endl;
    Employee employees[3];

    cout << "Enter the raise percentage: ";
    cin >> rper;
    cout << "Enter the position of the employees to be raised: ";
    cin >> rpos;

    for (int i = 0; i < 3; i++) {
        cout << "Before raise: " << endl;
        employees[i].display();
        employees[i].raise(rper, rpos);
        cout << "After raise: " << endl;
        employees[i].display();
    }

    return 0;
}
