#include<iostream>
using namespace std;
int add(int , int);
float add(float , float);
int main()
{
	int n1,n2,sum;
	cout<<"Enter the two integers  : \n";
	cin>>n1>>n2;
	sum=add(n1 , n2);
	cout<<"The sum of integers are : "<<sum;
	float n3,n4,sumf;
	cout<<"\n-------------------------------\n";
	cout<<"Enter two float values :\n";
	cin>>n3>>n4;
	sumf=add(n3 , n4);
	cout<<"The sum of float values are : "<<sumf;
}
int add(int n1 , int n2)
{
	int sum;
	sum=n1+n2;
	return sum;
}
float add(float n3 , float n4)
{
	float sumf;
	sumf=n3+n4;
	return sumf;
}
