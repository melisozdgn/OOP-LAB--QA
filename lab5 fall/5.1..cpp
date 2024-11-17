#include<iostream>
using namespace std;

class StudentBasicInfo
{
  private:
	  char name[30];
	  int age;
	  char gender;
	public:
	//Allow reading and displaying the student’s details
	void getBasicInfo();
	void putBasicInfo();
};
//function definitions
void StudentBasicInfo::getBasicInfo()
{
  cout<<"Enter student's basic information: "<<endl;
  cout<<"Enter the name of student:";
  cin>>name;      
  cout<<"Enter the age of the student: ";
  cin>>age;
  cout<<"Enter the gender of the student:";
  cin>>gender;
}
void StudentBasicInfo::putBasicInfo()
{
  cout<<"Name: "<<name<<",Age: "<<age<<", Gender: "<<gender<<endl;
}
//Create a derived class StudentResultInfo to store result details (total marks, percentage, and grade)
class StudentResultInfo : public StudentBasicInfo{
  private:
    int total;
    float perc;
    char grade;
  public:
    void getResultInfo();
    void putResultInfo();
};
void StudentResultInfo::getResultInfo()
{
    cout<<"Enter student's result information:" <<endl;
    cout<<"Enter total marks: ";
    cin>>total;
    perc=(float)((total * 100) / 500);
    cout<<"Grade: ";
    cin>>grade;
}
void StudentResultInfo::putResultInfo()
{
  cout<<"Total Marks: "<<total<<", Percentage: "<<perc<<",Grade: "<<grade<<endl;
  
}

int main()
{
	StudentResultInfo stu;
	stu.getBasicInfo();
	stu.getResultInfo();
	
	stu.putBasicInfo();
	stu.putResultInfo();

	return 0;
}