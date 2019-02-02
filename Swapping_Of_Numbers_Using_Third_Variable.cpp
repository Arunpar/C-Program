#include<iostream>
using namespace std;
int main()
{
	float num1,n1,n2,num2,temp;
	cout<<"Enter the  numbers :- \n";
	cin>>num1>>num2;
	n1=num1;
	n2=num2;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"\nBefore Swapping :-\n";
	cout<<"The First number is = "<<n1;
	cout<<"\nThe Second number is = "<<n2;
	cout<<"\n\nAfter Swapping :-\n";
	cout<<"The First number is = "<<num1;
	cout<<"\nThe Second number is = "<<num2;
	return 0;
	
}
