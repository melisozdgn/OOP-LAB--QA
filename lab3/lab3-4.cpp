#include<iostream>
using namespace std;

//fuction overloading 

double area( double x) {

	return (3.14*x*x);
}

int area(int a,int b) {
	return (a*b);
}
double area(double h, double g) {
	return (0.5*h*g);
}
int main() {

	cout<<"Area of Rectangle: "<<area(4.6)<<endl;
	cout<<"Area of Circle: "<<area(10)<<endl;
	cout<<"Area of Triangle"<<area(3.0,7.0)<<endl;

	return 0;
}
