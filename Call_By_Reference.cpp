#include<iostream>
using namespace std;
void swap(int & , int &);
int main()
{
	int num1;
	int num2;
	cout<<"Enter the Two Numbers :\n";
	cin>>num1>>num2;
	cout<<"The Original Numbers are :\n";
	cout<<num1<<"\n"<<num2<<"\n";
	swap(num1 , num2);
}
void swap(int &num1 , int &num2)
{
	int temp;
    temp=num1;
	num1=num2;
	num2=temp;
	cout<<"The Swapped Numbers are :\n";
	cout<<num1<<"\n"<<num2<<"\n";
}

