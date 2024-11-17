#include<iostream>
#include <sstream>
using namespace std;

class Room{
  public:
    double length,breadth,height;
    Room(){}
  
    double area(){
    return length*breadth;
    }
    
    double volume()
    {
     return length*breadth*height;
    }
};


int main()
{
  Room r;
  cout<<"Assign values to data members."<<endl;
  cout<<"Assign length as 42.5 breadth 33.3 ,and height 22.2"<<endl;
  // Assign values to data members
  r.length= 42.5;
  r.breadth= 33.3;
  r.height= 22.2;
  cout<<"Calculate the area and volume of the related room. "<<endl;
  cout<<"Area of Room = " <<r.area()<<endl;
  cout<<"Volume of Room= "<<r.volume()<<endl;
  return 0;
}