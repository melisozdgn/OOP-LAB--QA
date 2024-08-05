#include <iostream>
using namespace std;

class Country{
    string name;
    int count;
    int population;
    
    public:
    
    Country(string cName){
        name=cName;
        cout<<name<<"is created."<<endl;
    }
    Country(string cName, int cCount){
        name=cName;
        count=cCount;
        
        cout<< name<<" is created with "<< count << " number of cities."<< endl;
        
    }
    Country(string cName,int cCount, int pop){
    	name=cName;
    	count=cCount;
    	population=pop;
        cout<< name <<" is created with " << count << "number of cities and "<< population <<"populations."<< endl;
     
        
    }
   
    ~Country(){
        cout<<name<<" is fell down."<< endl;
    }
      
    
};

int main(){
    Country c1("Turkey");
    Country c2("Germany",79);
    Country c3("Brazil",17,214000000);
    return(0);
}
