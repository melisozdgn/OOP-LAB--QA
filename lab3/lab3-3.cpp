#include<iostream>
using namespace std;

class Line{
    private:
    double length;
    
    public:
    void setLength(double length_);
    double getLength(void);
    Line();    //constructor declaration
    ~Line();   //destructor declaration
        
   
};

Line::Line(void){
    cout<<"Object is being created"<<endl;
}
Line::~Line(void){
    cout<<"Object is being deleted"<<endl;
}
void Line::setLength(double length_){
   length=length_;
    
}
   
double Line::getLength(void){
    return length;
}

    
int main()
{
    Line line;
    
    line.setLength(6.0);
    cout<<"Length of line: "<< line.getLength() <<endl;
    return 0;
    
}