#include<iostream>
using namespace std;
int max(int,int);
main()
{
	int n1,n2,m;
	cout<<"Enter the Number 1 : ";
	cin>>n1;
	cout<<"Enter the Number 2 : ";
	cin>>n2;
	
	m=max(n1,n2);
	cout<<"The Maximum Number is = "<<m;
}
int max(int x,int y)
{
	if(x>y)
	return(x);
	else if(y>x)
	return(y);
	else
	{
		cout<<"Both numbers are equal";
		exit(0);
	}

}

