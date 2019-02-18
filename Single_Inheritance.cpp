#include<iostream>
using namespace std;
class A
{
	public:
		int n1,n2;
		void Setvalue()
		{
			cout<<"Enter the First Number : ";
			cin>>n1;
			cout<<"Enter the Second Number : ";
			cin>>n2;
		}
};
class B:public A
{
	int sum;
	public:
	void Getsum()
	{
		sum=n1+n2;
		cout<<"The Sum of Numbers is = "<<sum;
	}
};
main()
{
	B obj;
	obj.Setvalue();
	obj.Getsum();
}
