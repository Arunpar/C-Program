#include<iostream>
using namespace std;
int main()
{
	int n,st=0,temp,temp1=1,num;
	cout<<"Enter the number : ";
	cin>>n;
	num=n;
	while(n>0)
	{
		temp=n%10;
		for(int i=temp;i>0;i--)
		temp1=temp1*(i);
		
		st=st+temp1;
		n=n/10;
		temp1=1;
	}
	if(num==st)
	cout<<num<<" is a Strong Number";
	else
	cout<<num<<" is not a Strong Number";
	return 0;
}
