#include <iostream>
using namespace std;

class Animal{
  
  public:
  // Polymorphism
  virtual void makeSound(){
    cout<<"Animal sound:"<<endl;
  }
};
class Dog: public Animal
{
  public:
  Dog(){}
  void makeSound(){
    cout<<"Woof!"<<endl;
  }
};
class Cat: public Animal{
  public:
  Cat(){}
  void makeSound(){
    cout<<"Meow!"<<endl;
  } 
};

int main(){
  
  // Use of pointer to base class showing polymorphism for derived classes
  
  Animal *animal1 = new Cat();
  Animal *animal2 = new Dog();
  
  animal1->makeSound();
  animal2->makeSound();
  return 0;

}
  