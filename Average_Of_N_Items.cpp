#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no.of Items : ";
	cin>>n;
	float a[n],avg,sum=0;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the Item "<<i+1<<" : ";
		cin>>a[i];
		sum+=a[i];
	}
	avg=sum/n;
	cout<<"The Average of all Items is = "<<avg;
	return 0;	
}
