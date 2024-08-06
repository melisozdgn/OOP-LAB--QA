#include<iostream>
using namespace std;

class Person{
    
    private:
    string name;
    public:
    
    Person(string n){
        name=n;
    }
    
    Person(const Person &p)
    {
        cout<<"Copy cons"<<endl;
        name=p.name+"copy";
        
    }
        
    string getName(){
        return name;
    }
    
    
};

void display(Person p){
    
    cout<<p.getName()<<endl;
}


int main(){
    
    Person p("melis");
    display(p);
    
    return 0;
}