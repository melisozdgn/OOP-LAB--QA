#include<iostream>
#include<string.h>

using namespace std;

class String
{  	char str[200];
  public:
	String(){}
	
	String(char str[])
	{	strcpy(this->str, str);	}
	
	void print()
	{	
	    cout<<"The string after the concatenation: "<<str;
	}
	 // operator overloading
	String& operator+ (String&); 
};

String& String :: operator+ (String& String2)
{	String String3;
			
   strcat(this->str, String2.str); 
   
   // concatenate strings
    strcpy(String3.str, this->str); 
    return String3;
}

int main()
{	char str1[] = "Overloading";
	char str2[] = "MemberFunction";
	
	String s1(str1);
	String s2(str2);
	
	String s3;
	
	s3 = s1+s2;
	
	s3.print();
	
	return 0;
}
