#include <iostream>
using namespace std;

class CompanyEmployees{
protected:
    string fullName;
    int age;
  
public:
    
    CompanyEmployees(string f, int a){
      fullName=f;
      age=a;
    }
    string getFullName(){
      return fullName;
    }
    int getAge(){
      return age;
    }
    
    virtual float calcSalary()=0;
    
    virtual ~CompanyEmployees(){
      cout<<fullName<< "has left the job at the age of"<<age<<endl;
    }

};

class Managers: public CompanyEmployees{
private:
    int rank;
public:
    Managers(string f, int a, int r): CompanyEmployees(f,a){
      rank=r;
    }
    float calcSalary(){
      return 5000.0+rank*5000.0/100.0;
    }
    ~Managers()
    {
      cout<<fullName<<"has left the Management Department at the age of "<<age<<endl;
    }

};

class Employees: public CompanyEmployees{
private:
    int year;
public:
    Employees(string f, int a, int y):CompanyEmployees(f,a){
      year=y;
    }
    float calcSalary(){
      return 2000+(year/5)*1000;
    }
    ~Employees(){
      cout<<fullName<<" has left being employee at the age of "<<age<<endl;
    }
   
};
void display(CompanyEmployees *c){
  cout<<"Name: "<<c->getFullName()<<"Age: "<<c->getAge()<<", Salary: "<<c->calcSalary()<<endl;
}
int main(){
  
  CompanyEmployees *c[]={
    new Employees("Stephen Curry",32,2),new Managers("Kobe Bryant",42,3)};
  for(int i=0;i<2;i++)
  {
    display(c[i]);
  }
  
  for(int i=0;i<2;i++)
  {
    delete c[i];
  }
  
  return 0;
}   
