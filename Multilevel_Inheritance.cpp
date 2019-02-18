#include<iostream>
using namespace std;
class A
{
	public:
		int n1,n2;
		void Setvalues()
		{
			cout<<"Enter the First Number : ";
			cin>>n1;
			cout<<"Enter the Second Number : ";
			cin>>n2;
		}
};
class B:public A
{
	public:
	int n3;
	void SetvalueC()
	{
		cout<<"Enter the Third Number : ";
		cin>>n3;
	}
};
class C:public B
{
	int add;
	public:
	void Getsum()
	{
		add=n1+n2+n3;
		cout<<"The Sum of Numbers is = "<<add;
	}
};
main()
{
	C obj;
	obj.Setvalues();
	obj.SetvalueC();
	obj.Getsum();
}
