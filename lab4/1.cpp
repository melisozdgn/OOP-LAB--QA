
#include <iostream>
using namespace std;

int add(int a, int b){
    cout<<"I am the first one"<<endl;
    return a+b;
}

double add(int a, double b){      //overload function 
    
    cout<<"I am the second one"<<endl;
    return a+b;
    
}

double add(double a, int b){      //overload function 
    cout<<"I am the third one"<<endl;
    return a+b;
}

double add(double a, double b){    //overload function 
    
    cout<<"I am the fourth one"<<endl;
    return a+b;
}


int main()
{
   cout<< add(1,2)<<endl;
   cout<<add(1,2.1)<<endl;
   cout<<add(3.1,3)<<endl;
   cout<<add(2.1,3.1)<<endl;
    return 0;
}
