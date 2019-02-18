#include<iostream>
using namespace std;
int recurSum(int n)
{
	if(n<=1)
	return n;
	return n+recurSum(n-1);
}
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"The sum of numbers from 1 to "<<n<<" is : ";
	cout<<recurSum(n);
	return 0;
}
