#include<iostream>

using namespace std;

class Person
{
	private:
		string name;
	public:
//Its constructor takes one parameter and assigns its value to the data member.
		Person(string n)
		{
			name=n;
		}
//A copy constructor in the class copies the data members of a Person object to this class.		
		Person(const Person &p)
		{
			cout<<"Copy Cons"<<endl;
			name=p.name+"copy";
		}
		
//Its data member is a read-only value.
//This is implemented with a getter (getName) that
// does not access the data member directly.

		string getName()
		{
			return name;
		}
	
};
// Create a C++ display function that takes a Person object as a parameter.
void display(Person p)
{
	cout<<p.getName()<<endl;
}

int main()
{
	Person p("CMPE225");

	display(p);
	
}