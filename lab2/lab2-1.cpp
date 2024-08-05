#include<iostream>
using namespace std;

void read(int[],int);

int main()
{

   int total, sum=0;
   int maxGrade=0;
   int *grades;

   cout<<"Enter the class total number: "<<endl;
   cin>>total;

   grades=new int[total];
   read(grades,total);

   for(int i=0;i<total;i++)
   {
      sum+= grades[i];

      if(grades[i]>maxGrade)

         grades[i]=maxGrade;
   }
   cout<<"Average: "<<sum/total<<endl;
   cout<<"The maximum grade= "<<maxGrade<<endl;
   delete [] grades;
   return 0;
}

void read(int gradeArr[], int size)
{
   
   cout<<"Enter grades:";
   for(int i=0;i< size;i++)
     cin>>gradeArr[i];

   
    
}
    
    



    


