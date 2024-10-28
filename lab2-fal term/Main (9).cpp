#include<iostream>
using namespace std;

class Book{
  public:
  string name;
  
  Book(string n){
    name=n;
    cout<<"Book created:"<<name<<endl;
    
  }
  ~Book(){
    cout<<"Book destrpyed: "<<name<<endl;
    }
    void display(){
      cout<<"Title: "<<name<<endl;
    }
};


int main()
{
  Book *b=new Book("The Little Prince");
  b->display();
  
  delete b;
  
  
	return 0;
}
