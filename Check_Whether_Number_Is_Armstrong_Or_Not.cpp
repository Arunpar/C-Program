#include<iostream>
using namespace std;
int main()
{
	int num,arm=0,temp;
	cout<<"Enter the Number : ";
	cin>>num;
	temp=num;
	while(num>0)
	{
		arm=arm+((num%10)*(num%10)*(num%10));
		num=num/10;
	}
	if(arm==temp)
		cout<<arm<<" is Armstrong number";
	else
		cout<<arm<<" is Not Armstrong number";
	return 0;
}

