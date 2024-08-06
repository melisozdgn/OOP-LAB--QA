#include<iostream>
using namespace std;

class Room{
    
  public:
  double length;
  double breadth;
  double height;
  

    
    double area(){
         return length * breadth;
    }
    double volume(){
         return length * breadth * height;
    }
    
    
};



int main(){
    Room r;
    
    room1.length = 47.5;
    room1.breadth = 33.7;
    room1.height = 21.2;
    
    cout<<"Area of Room: "<<r.area()<<endl;
    cout<<"Volume of Room: "<<r.Volume()<<endl;
    
}
    
    
    
    
    
