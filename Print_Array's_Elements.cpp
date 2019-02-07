#include<iostream>
using namespace std;
int main()
{
	int i,num,a[num];
	cout<<"Enter the number upto which Array print-->";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cout<<"Enter the Element "<<i+1<<" : ";
		cin>>a[i];
	}
	cout<<"-------------------------------\n";
	cout<<"The Elements of array are :\n";
	for(i=0;i<num;i++)
	{
		cout<<a[i]<<"  ";		
	}
	return 0;
}
