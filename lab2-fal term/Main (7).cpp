#include<iostream>
using namespace std;

class PlayerInformation{
  
  public:
  string name;
  string surname;
  int age;
  
 PlayerInformation(string n, string s, int a){
   name=n;
   surname=s;
   age=a;
 }
    
};
 
int main(){
  PlayerInformation p("Kobe", "Bryant", 44);
  cout<<"Name:"<< p.name <<", "<<"Surname:"<< p.surname <<", "<<"Age: "<< p.age;
 
	return 0;
}
