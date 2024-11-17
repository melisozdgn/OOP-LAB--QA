#include<iostream>
using namespace std;

class GeometricObject
{
  protected:
    string color;
    bool filled;
  
  public:
    GeometricObject()
    {
      color="white";
      filled=false;
    }
    GeometricObject(string color_,bool filled_)
    {
      color=color_;
      filled=filled_;
    }
  
    string getColor(){
      return color;
    }
    bool getFilled(){
      return filled;
    }
    void setColor(string c){
      color=c;
    }
    void setFilled(bool f){
      filled=f;
    }
};
class Circle:public GeometricObject{
  private:
    double radius;
    double PI=3.14;
  public:
  Circle(){
    radius=1;
  }
  Circle(double r){
    radius=r;
  }
  Circle(double r,string c,bool f)
  {
    radius=r;
    color=c;
    filled=f;
  }
  double calcArea(){
    return PI*radius*radius;
  }
  double calcPerimeter(){
    return 2*PI*radius;
  }
};

class Rectangle:public GeometricObject{
  private:
  double width;
  double height;
  
  public:
  Rectangle(){}
  Rectangle(double width_,double height_){
    width=width_;
    height=height_;
  }
  Rectangle(double width_,double height_,string c,bool f){
    width=width_;
    height=height_;
    color=c;
    filled=f;
  }
  double calcArea()
  {
    return width*height;
  }
  double calcPerimeter()
  {
    return (width+height)*2;
  }
  
};

int main()
{
  Circle c;
  cout<<"A circle is created with"<<endl;
  cout<<"color: "<<c.getColor()<<"and filled: "<<c.getFilled()<<endl;
  cout<<"area: "<<c.calcArea()<<endl;
  cout<<"perimeter: "<<c.calcPerimeter()<<endl;
  
  Rectangle r(2,4);
  cout<<"A rectangle is created with"<<endl;
  cout<<"Color:" <<r.getColor()<<"and filled: "<<r.getFilled()<<endl;
  cout<<"area: "<<r.calcArea()<<endl;
  cout<<"perimeter: "<<r.calcPerimeter()<<endl;
 
	
	return 0;
}