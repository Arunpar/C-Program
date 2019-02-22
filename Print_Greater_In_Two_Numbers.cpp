#include<iostream>
using namespace std;
main()
{
	int n1,n2;
	cout<<"Enter the Number 1 : ";
	cin>>n1;
	cout<<"Enter the Number 2 : ";
	cin>>n2;
	
	if(n1>n2)
	cout<<"First Number is greater";
	
	else if(n2>n1)
	cout<<"Second Number is greater";
	
	else
	cout<<"Both are equal";
	
	return 0;
}
