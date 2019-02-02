#include<iostream>
using namespace std;
int main()
{
	int num,table,count;
	cout<<"Enter the number for which table printed : ";
	cin>>num;
	cout<<"\nThe table of "<<num<<" is :-";
	for(count=1;count<=10;count++)
	{
		table=num*count;
		cout<<"\n"<<num<<" * "<<count<<" = "<<table;
	}
	return 0;
}


