#include<iostream>
using namespace std;
#define PI 3.14
class Cylinder{
    
    public:
      float h,r;
      float calculateArea();
      float calculateVolume();
      
};  
  float Cylinder::calculateArea(){
      
      return 2*PI*r*h+2*PI*r*r;
  }
  
  float Cylinder::calculateVolume(){
      
      return  PI*r*r*h;
      
  }
  
int main(){
    
    Cylinder cylinder;
    
    cout<<"Height(h): ";
    cin>>cylinder.h ;
    cout<<"Radius(r): ";
    cin>>cylinder.r;
    
    cout<<"Area: "<<cylinder.calculateArea()<<endl;
    cout<<"Volume: "<<cylinder.calculateVolume()<<endl;
    
    return 0;
    
}