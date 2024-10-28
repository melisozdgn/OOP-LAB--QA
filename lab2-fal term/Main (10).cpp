#include<iostream>
using namespace std;

class Country{
  
  string name;
  int cityNum;
  int popNum;  //Number of population
  
  public:
  
  Country(string n){
    name=n;
    cout<<name<< " is created." <<endl;
  }
  Country(string n, int c)
  {
    name=n;
    cityNum=c;
    cout<<name<< " is created with "<<cityNum<<" number of cities."<<endl;
    
  }
  Country(string n, int c, int p)
  {
    name=n;
    cityNum=c;
    popNum=p;
    cout<<name<<" is created with "<<cityNum<<" number of cities and "<<popNum<<" populations."<<endl;
    
  }
  ~Country(){

    cout<<name<<" is fell down."<<endl;
  }
  

};


int main()
{
  Country Object1("Turkey");
  Country Object2("Germany",79);
  Country Object3("Brazil",17,214000000);
	return 0;
}
