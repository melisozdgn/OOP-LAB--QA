#include <iostream>
#include <string>

using namespace std;

class Student{
  
  protected:
    int studentID;
    string name;
    int age;
  
  public:
  // Constructor
    Student(int id,string name, int age):studentID(id),name(name),age(age){}
    // Getter
    int getId(){
        return studentID;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};
// Derived Class
class UndergraduateStudent: public Student{
  private:
    string major;
  public:
  // Constructor
    UndergraduateStudent(int id,string name, int age,string major):Student(id,name,age),major(major){}
    string getMajor(){
        return major;
    }
    //Using this ->(pointer) the member variable of the class is clearly specified
    void setMajor(string major){
        this->major = major; 
    }
};
//Derived class
class GraduateStudent:public Student{
  private:
    string researchTopic;
  public:
  // Constructor
    GraduateStudent(int id,string name, int age,string topic):Student(id,name,age),researchTopic(topic){}
    string getTopic(){
        return researchTopic;
    }
    // Setter
    void setResearchTopic(string researchTopic){
        this->researchTopic = researchTopic; 
    }
};

int main(){
  
    UndergraduateStudent stu1(1001, "Curry", 20, "Computer Science");
    GraduateStudent stu2(2001, "King James", 25, "Machine Learning");

    cout<<"Undergraduate Student Details: "<<endl;
    cout<<"Student ID: "<<stu1.getId()<<endl;  
    cout<<"Name: "<<stu1.getName()<<endl;
    cout<<"Age: "<<stu1.getAge()<<endl;
    cout<<"Major: "<<stu1.getMajor()<<endl;

    cout<<endl;

    cout<<"Graduate Student Details: "<<endl;
    cout<<"Student ID: "<<stu2.getId()<<endl;  
    cout<<"Name: "<<stu2.getName()<<endl;
    cout<<"Age: "<<stu2.getAge()<<endl;
    cout<<"Research Topic: "<<stu2.getTopic()<<endl;

    return 0;
}