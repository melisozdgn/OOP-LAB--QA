#include<iostream>
using namespace std;

class Negative{
  private:
  string message;
  
  public:
  
  Negative(){}
  Negative(string t):message(t){}
  string getMessage(){
    return message;
  }
};
//no members
//Create another class named as ZeroDivision that has no members and it is created for using the throw and catch part of your main function
class ZeroDivision{}; 

int main()
{
  
  int l,t;
  double loadPerTruck;
  try{
  
    cout<<"Enter number of packages to load: "<<endl;
    cin>>l;
    
    //Any negative number of weight and/or truck would be illogical.
    if(l<0)
    {
    throw Negative("number of packages to load");
    }
    
    
    cout<<"Enter number of trucks available: "<<endl;
    cin>>t;
    
    if(t<0)
    {
      throw Negative("number of trucks to carry the load");
    }
    //Declare loadPerTruck that controls the loaded truck of your program. (double)
    if(t!=0)
    {
      loadPerTruck=l/static_cast<double>(t);
    }
    else
    {
      //Create a class called Negative that controls the number of trucks and returns a message to the user."
      throw ZeroDivision();
      cout<<"You have"<< loadPerTruck<<"packages per truck and load"<<endl;
    
    }
    
  //you have to check the number of loads of packages and trucks.
  //you have to use cerr for your output.
  
  }
  catch(Negative e)
  {
    cerr<<"Encountered negative number; mistake in "<<e.getMessage()<<endl;
  }
  
  catch(ZeroDivision)
  {
    cerr<<"You have no trucks available!"<<endl;
  }
  
  cout<<"Leaving the program "<<endl;
  


}
