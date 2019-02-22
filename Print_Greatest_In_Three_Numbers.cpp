#include<iostream>
using namespace std;
main()
{
	int n1,n2,n3;
	cout<<"Enter the Number 1 : ";
	cin>>n1;
	cout<<"Enter the Number 2 : ";
	cin>>n2;
	cout<<"Enter the Number 3 : ";
	cin>>n3;
	
	if((n1>n2)&&(n1>n3))
	cout<<"First Number is greatest";
	
	else if((n2>n1)&&(n2>n3))
	cout<<"Second Number is greatest";

	else if((n3>n1)&&(n3>n2))
	cout<<"Third Number is greatest";
	
	else
	cout<<"All Three Numbers are Equal";
	
    return 0;
}
