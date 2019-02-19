#include<iostream>
using namespace std;
int x=1;
class test
{
	public:
		test()
		{
			cout<<"\n object "<<x<<" initialisation";
			x++;
		}
		~test()
		{
			x--;
			cout<<"\n object "<<x<<" destructor";
		}
};
main()
{
	test t1,t2,t3,t4;
}
