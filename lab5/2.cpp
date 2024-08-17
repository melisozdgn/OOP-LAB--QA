#include<iostream>
#include<string.h>
using namespace std;

class X
{
    private:
       int d;
    public:
    
        void set_value(int val)
        {
         d=val;
        }
        void show_sum(int n){
            
            cout<<"Sum of "<< d <<" and "<<n<<" = "<<d+n<<endl;
        }
};

class Y{
    
  public:
     X a;  // Composition
   void print_result()
   {
       a.show_sum(7);
   }
     
  
};


int main(){
    
    Y b;
    // two-dot operator
    b.a.set_value(22); 
    b.a.show_sum(33);
    b.print_result();
    
}