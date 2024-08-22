#include <iostream>
using namespace std;
#define PI 3.14

// Abstract class
class Shape{
  public:
    virtual double calculateArea() = 0;
  
};
// derived class
class Rectangle: public Shape{
  private:
    double width, height;
  
  public:
  Rectangle(double w, double h):width(w),height(h){}
    
    double calculateArea()
    {
      return (width * height);
    }
  
  
};
// derived class
class Circle: public Shape{
  private:
    double radius;
    
  public:
  Circle(double r):radius(r){}
  double calculateArea(){
    return (PI*radius*radius);
  }
 
};

int main(){
  
Rectangle rectangle(5.0, 4.0);
Circle circle(3.0);

cout<<"Area of Rectangle: "<< rectangle.calculateArea()<<endl;
cout<<"Area of Circle: "<<circle.calculateArea()<<endl;
return 0;
}