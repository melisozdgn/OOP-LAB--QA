#include<iostream>
using namespace std;
class Increment;
class Square{
  private:
    int side;
  public:
    Square(){
      side=2;
    }
    void print()
    {
      cout<<"side of square is: "<< side << endl;
    }
    //Increment class that has to be the friend class
    friend class Increment;
   
    
};
class Increment{
  private:
    int val;
  public:
  //need a constructor to get the increment value from the user.
    Increment()
    {
    cout<<"enter Increment value: ";
    cin>>val;
    }
  //Declare a change() function for increasing the size of the square and a print function for seeing a side of the square.
  void change(Square& obj){
    obj.side += val;
  }
};
int main()
{
  Square s;
  s.print();
  Increment i;
  i.change(s);
  s.print();
  
  return 0;
}