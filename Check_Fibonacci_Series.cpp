#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number Which you want to check : ";
	cin>>n;
	int a=0,b=1,c;
	while(n>=c)
	{
		c=a+b;
		if(c==n)
		{
			cout<<"Number "<<n<<" is in fibonacci series ";
			exit(0);
		}
		a=b;
		b=c;
	}
	cout<<"Number "<<n<<" is not in fibonacci series ";
}
