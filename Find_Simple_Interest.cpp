#include<iostream>
using namespace std;
int main()
{
	float si,p,r,t;
	cout<<"Enter the value of Principle(in Rs) :";
	cin>>p;
	cout<<"Enter the value of Rate(in % )      :";
	cin>>r;
	cout<<"Enter the value of Time(in month)   :";
	cin>>t;
	si=(p*r*t)/1200;
	cout<<"-----------------------------------------\n";
	cout<<"The Simple Interest for "<<t <<" month is = "<<si;
	return 0;
	
}
