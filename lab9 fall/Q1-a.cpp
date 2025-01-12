#include<iostream>
#include<fstream>
using namespace std;

//The program checks for the end-of-file using cin.eof().
//Reads a line from the user character by character, and prints each character. 
//The loop ends when EOF is encountered.
int main()
{
  int character;
  cout<<"Before input, cin.eof() is "<<cin.eof()<<endl;
  cout<<"Enter a sentence followed by end-of-file:"<<endl;
  
//use get to read each character; use put to display it
 while((character=cin.get())!=EOF)
 {
    cout.put(character);
 }
return 0;
}
  

