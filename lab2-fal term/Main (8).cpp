#include<iostream>
using namespace std;

class Employee{
  public:
    string firstName;
    string lastName;
    int employeeID;
    double salary;
  
  Employee(string n, string l, int id, double s){
    firstName=n;
    lastName=l;
    employeeID=id;
    salary=s;
  }
  
  void displayInfo(){
    cout<<"Employee ID: "<<employeeID<<endl;
    cout<<"Name: "<<firstName<<" "<<lastName<<endl;
    cout<<"Salary: "<<" $"<<salary<<endl;
  }
};

int main(){
  Employee emp("John", "Smith", 101, 999000);
  emp.displayInfo();
 
	return 0;
}
