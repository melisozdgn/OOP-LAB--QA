#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string n,s;
	double mid1,mid2,final;
	int i=0,id;
	
 //read from this file 
	ifstream fin("allstudentgrades.txt");
 //output file name: studentsFinalScores.txt
    ofstream fout("studentsFinalScore.txt");
	
	if(!fin.is_open())
	{
		cout<<"File could not be opened";
		exit(0);
	}
		
	while(!fin.eof()) 
	{
		fin>>n>>s>>id>>mid1>>mid2>>final;
		fout<<n<<" "<<s<<" "<<id<<" "<<mid1<<" "<<mid2<<" "<<final<<" "<<mid1*0.3+mid2*0.3+final*0.4<<endl;

	}
		
fin.close();
fout.close();
}