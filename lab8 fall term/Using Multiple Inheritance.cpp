#include <iostream>
using namespace std;

class Student{
  protected:
    int studentId;
  
  public:
  Student(int id):studentId(id){}
  int getStudentId()
  {
    return studentId;
  }
};
class Teacher{
  private:
  int registrationNo;
  
  public:
  Teacher(int r):registrationNo(r){}
  
  int getRegistrationNo()
  {
    return registrationNo;
  }
};

//Multiple Inheritance 
class Assistant: public Student, public Teacher
{
  public:
  Assistant(int studentId,int registrationNo):Student(studentId),Teacher(registrationNo){}
  
};
int main(){
  int studentId=9753;
  int registrationNo=987;
  Assistant assistant(studentId,registrationNo);
  cout<<"Student id: "<<assistant.getRegistrationNo()<<endl;
  cout<<"registrationNo:" <<assistant.getRegistrationNo()<<endl;
 
  
  return 0;
}   
