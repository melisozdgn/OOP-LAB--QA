#include<iostream>
using namespace std;
class Square
{
  private:
  int side;
  
  public:
  Square(){
    cout<<"default constructor"<<endl;
  }
  Square(int s){
    side=s;
    cout<<"overload constructor"<<endl;
  }
  int area();
  int perimeter();
  ~Square(){
    cout<<"destructor"<<endl;
  }
   
};

int Square::area()
{
  return side*side;
}
int Square::perimeter()
{
  return 4*side;
}

int main()
{
  Square obj1(1);
  Square obj2(3);
    cout<<"Perimeter of the first object: "<<obj1.perimeter()<<endl;
    cout<<"Area of the first object: "<<obj1.area()<<endl;
     cout<<"Perimeter of the first object: "<<obj2.perimeter()<<endl;
    cout<<"Area of the first object: "<<obj2.area()<<endl;
   
  
	return 0;
}