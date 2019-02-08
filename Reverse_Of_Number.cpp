#include<iostream>
using namespace std;
int main()
{
	int num,rev=0;
	cout<<"Enter the Number : ";
	cin>>num;
	while(num>0)
	{
		rev=rev*10+(num%10);
		num=num/10;
	}
	cout<<"Reverse of the Number is = "<<rev;
	return 0;
}

