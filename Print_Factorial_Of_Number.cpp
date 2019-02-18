#include<iostream>
using namespace std;
int main()
{
	int num,fact=1,count;
	cout<<"Enter any number : ";
	cin>>num;
		for(count=1;count<=num;count++)
	{
	fact=fact*count;
	}
	cout<<"The factorial of "<<num <<" is = "<<fact;
	return 0;
}


