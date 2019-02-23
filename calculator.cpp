#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int calc;
	int ch;
	float n1,n2,n3;
	cout<<"Enter the First Number  : ";
	cin>>n1;
	cout<<"Enter the Second Number : ";
	cin>>n2;
	
	do{
	cout<<"------------------------------------------\n";
	cout<<"Enter '1' for Addition of Numbers \n";
	cout<<"Enter '2' for Subtraction of Numbers \n";
	cout<<"Enter '3' for Multiplication of Numbers \n";
	cout<<"Enter '4' for Division of Numbers \n";
	cout<<"Enter '5' for Power of a Number \n";
	cout<<"-----------------------------------------\n";
	cout<<"Enter Your Choice : ";
	cin>>calc;
	switch(calc)
	{
		case 1: n3=n1+n2;
		break;
		case 2: n3=n1-n2;
		break;
		case 3: n3=n1*n2;
		break;
		case 4: n3=n1/n2;
		break;
		case 5: n3=pow(n1,n2);
		break;
		default:
		cout<<"Wrong input\n";
	}
	cout<<"The Result becomes = "<<n3;
	cout<<"\n========================================";
	cout<<"\nPress '1' to continue with same Numbers ";
	cout<<"\nPress any key to change the Numbers\n";
	cin>>ch;
	cout<<"========================================\n";
	if(ch!=1)
	{
		cout<<"Enter the First Number  : ";
		cin>>n1;
		cout<<"Enter the Second Number : ";
		cin>>n2;
		ch=1;
	}
	}
	while(ch==1);
}
