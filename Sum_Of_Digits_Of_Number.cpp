#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter the Number : ";
	cin>>num;
	while(num>0)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	cout<<"Sum of digits of a Number is = "<<sum;
	return 0;
}

