#include<iostream>
using namespace std;
float cir(float);
int main()
{
	float r,a;
	cout<<"Enter the radius of circle : ";
	cin>>r;
	a=cir(r);
	cout<<"The Area of circle is = "<<a;
}
float cir(float x)
{
	return(3.14*x*x);
}
