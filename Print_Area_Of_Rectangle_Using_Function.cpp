#include<iostream>
using namespace std;
int rec(int,int);
main()
{
	int l,b,a;
	cout<<"Enter the Length of a Rectangle  : ";
	cin>>l;
	cout<<"Enter the Breadth of a Rectangle : ";
	cin>>b;
	a=rec(l,b);
	cout<<"The Area of Rectangle is = "<<a;
}
int rec(int x,int y)
{
	return(x*y);
}
