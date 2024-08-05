#include <iostream>
using namespace std;

class Sports{
    
    public:
    
    Sports(string name)
    {
        cout<<name<<"is created."<<endl;
    
    }
    Sports(string name, string team){
        cout<<name<<"is created."<<endl;
        cout<<team<< " Team "<<endl;
    }
    Sports(string name,string team,string playerName){ 
        cout<<name<<"is created."<<endl;
        cout<<"Team:"<< team<<endl;
        cout<<"Player name:"<<playerName<<endl;
    }
};

int main(){
    
    Sports sp1("Basketball", "Golden State Warriors", "Stephen Curry");
    Sports sp2("Basketball", "Lakers");
    return 0;
}
    
