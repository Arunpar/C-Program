#include<iostream>
using namespace std;
class Sum
{
	public:
		int n1,n2,add;
		void Setvalues()
		{
			cout<<"Enter the Number 1 : ";
			cin>>n1;
			cout<<"Enter the Number 2 : ";
			cin>>n2;
		}
		void Getsum()
		{
			add=n1+n2;
			cout<<"The sum of Numbers is = "<<add;
		}
};
main()
{
	Sum s;
	s.Setvalues();
	s.Getsum();
}

