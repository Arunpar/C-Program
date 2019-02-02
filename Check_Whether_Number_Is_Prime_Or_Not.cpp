#include<iostream>
using namespace std;
int main()
{
	int num,i,flag;
	cout<<"Enter the Number : ";
	cin>>num;
	for(i=2;i<=num/2;i++)
	{
		if (num%i==0)
		{
			flag=0;
			break;
	    }
	}
	if(flag==1)
	cout<<num<<" is a prime number";
	else
	cout<<num<<" is not a prime number";
	return 0;
}
