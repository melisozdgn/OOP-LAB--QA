#include<iostream>

using namespace std;

class Employee
{
	public:
	  string firstName;
		string lastName;
		static int count;
		
		// constructor
		Employee(const string&, const string&);	
		//destructor
		~Employee();
		string getFirstName() const; 
		string getLastName() const; 
		
		//static member function
		static int getCount(); //return # of objects instantiated
		
};


int Employee::count{0}; 

int Employee::getCount()
{
  return count;
  
}

//constructor 
Employee::Employee(const string& first, const string& last):firstName(first), lastName(last)
{
	++count; 
	cout<<"Employee constructor for "<<firstName<<' '<<lastName<<" called."<<endl;
}

//destructor 
Employee::~Employee()
{
	cout<<"~Employee() called for "<<firstName<<' '<<lastName<<endl;
	--count; 
}


string Employee::getFirstName() const{return firstName;}

string Employee::getLastName() const{return lastName;}

int main()
{

	cout<<"Number of employees before instantiation of any objects is "<<Employee::getCount()<<endl;
	
	
	Employee e1({"Kobe", "Bryant"});
	Employee e2({"Stephen", "Curry"});
	
	cout<<"Number of employees after objects are instantiated is "<<Employee::getCount()<<endl;
	cout<<"Employee 1: "<<e1.getFirstName()<<" "<<e1.getLastName()<<endl;
	cout<<"Employee 2: "<<e2.getFirstName()<<" "<<e2.getLastName()<<endl;
	cout<<"Number of employees after objects are deleted is "<<Employee::getCount()<<endl;
}

