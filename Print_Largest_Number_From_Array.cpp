#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of Array : ";
	cin>>n;
	int a[n],max;
	for(int i=0;i <n;i++)
	{
		cout<<"Enter the Value of a["<<i+1<<"] : ";
		cin>>a[i];
	}
	max = a[0];
	for(int i=1;i<n;i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	cout<<"--------------------------------\n";
	cout<<"The largest number is : "<<max;
}
