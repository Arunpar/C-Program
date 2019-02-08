#include<iostream>
using namespace std;
int main()
{
	int num,a=0,b=1,c,count;
	cout<<"Enter the number upto which Series print : ";
	cin>>num;
	cout<<"The Fibonacci Series upto given no is :- \n";
	cout<<a<<"\t"<<b;
	for(count=1;count<=num-2;count++)
	{
		c=a+b;
		cout<<"\t"<<c;
		a=b;
		b=c;
		}
	return 0;
}
