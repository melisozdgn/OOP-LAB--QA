#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
// Constructor
    Person(string _name, int _age) : name(_name), age(_age) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
// Derived class
class Student : public Person {
private:
    int rollNumber;
    char grade;
    float marks;

public:
// Constructor
    Student(string _name, int _age, int _rollNumber, char _grade, float _marks) 
        : Person(_name, _age), rollNumber(_rollNumber), grade(_grade), marks(_marks) {}

    void display() {
        Person::display();
        cout << "Roll number: " << rollNumber << endl;
        cout << "Grade: " << grade << endl;
        cout << "Marks: " << marks << endl;
    }
};
//Derived class
class Teacher : public Person {
private:
    int employeeID;
    string subject;
    float salary;

public:
// Derived class
    Teacher(string _name, int _age, int _employeeID, string _subject, float _salary) 
        : Person(_name, _age), employeeID(_employeeID), subject(_subject), salary(_salary) {}

    void display() {
        Person::display();
        cout << "Employee ID: " << employeeID << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student("Alice", 18, 101, 'A', 95.5);
    Teacher teacher("Mr. Smith", 35, 2001, "Mathematics", 50000.0);

    cout << "Student Details:" << endl;
    student.display();
    cout << endl;

    cout << "Teacher Details:" << endl;
    teacher.display();

    return 0;
}