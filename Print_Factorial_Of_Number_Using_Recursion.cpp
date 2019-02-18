#include<iostream>
using namespace std;
int recurFact(int n)
{
	if(n<=1)
	return n;
	return n*recurFact(n-1);
}
int main()
{
	int n;
	cout<<"Enter the Number : ";
	cin>>n;
	cout<<"The Factorial of "<<n<<" is : ";
	cout<<recurFact(n);
	return 0;
}
