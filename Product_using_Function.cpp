#include<iostream>
using namespace std;
int num(int,int);
float numb(float,float);
main()
{
	int n1,n2,pro;
	float div;
	cout<<"Enter the First Number : ";
	cin>>n1;
	cout<<"Enter the Second Number : ";
	cin>>n2;
	pro=num(n1,n2);
	cout<<"----------------------------------\n";
	cout<<"The Substraction of Number is = "<<pro;
	div=numb(n1,n2);
	cout<<"\nThe Sum of Number is = "<<div;
}
int num(int x,int y)
{
	return(x*y);
}
float numb(float x,float y)
{
	return(x/y);
}
