#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ifstream fin;
  string name,temp;
  int age;
  
  fin.open("file.txt");
  
  getline(fin,name);
  
  fin>>age;
  
  //use ' ' as separator,default is '\n'(newline). Now name is "Roger"
  getline(fin,name,' ');
  //Now temp is 'Federer'"
  getline(fin,temp,' ');
  
  name.append(1,' ');
  
  name+=temp;
  
  fin>>age;
  
  cout<<name<<endl;
  cout<<age<<endl; 
  
  fin.close();
  return 0;
}