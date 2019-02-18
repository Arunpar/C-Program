#include<iostream>
using namespace std;
int area(int , int);
float area(float);
int main()
{
	int b,l,rec;
	float r,cir;
	cout<<"Enter the Length of a Rectangle  : ";
	cin>>l;
	cout<<"Enter the Breadth of a Rectangle : ";
	cin>>b;
	rec=area(l , b);
	cout<<"The Area of Rectangle is         : "<<rec;
	cout<<"\n--------------------------------------\n";
	cout<<"Enter the radius of circle       : ";
	cin>>r;
	cir=area(r);
	cout<<"The area of Circle is            : "<<cir;
}
int area(int l , int b)
{
	int rec;
	rec=l*b;
	return rec;
}
float area(float r)
{
	float cir;
	cir=3.14*r*r;
	return cir;
}
