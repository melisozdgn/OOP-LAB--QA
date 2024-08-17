#include <iostream>
using namespace std;

class StudentBasicInfo
{
    private:
    char name[50];
    int age;
    char gender;
    
    public:
    void getBasicInfo();
    void putBasicInfo();

};

void StudentBasicInfo::getBasicInfo()
{
    
    cout<<"Enter student's basic info:"<<endl;
    cout<<"Enter the name of the student: ";
    cin>>name;
    cout<<"Enter the age of the student: ";
    cin>>age;
    cout<<"Enter the gender of the student: ";
    cin>>gender;
}
void StudentBasicInfo::putBasicInfo()
{
    
    cout<<"Name: "<< name <<"Age: "<< age <<"Gender: "<< gender <<endl;
    
}
    
class StudentResultInfo : public StudentBasicInfo 
{ 
  private:
    int totalGrade;
    float perc;
    char grade;
    
  public:
  
   void getResultInfo();
    void putResultInfo();
    

};

void StudentResultInfo:: getResultInfo()
{
    cout<<"Enter student's result information:"<<endl;
    cout<<"Enter total marks: ";
    cin>> totalGrade;
    perc=(float)((totalGrade*100) / 500);
    cout<<"Grade: ";
    cin>>grade;
    
}
void StudentResultInfo:: putResultInfo(){
    
    cout<<"Total Marks:" <<totalGrade<<"Percentage: "<<"Grade: "<<endl;
    
}


int main()
{
    StudentResultInfo std;
    
    std.getBasicInfo();
    std.getResultInfo();
    
    std.putBasicInfo();
    std.putResultInfo();
    

    return 0;
}