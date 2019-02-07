#include<iostream>
using namespace std;
main()
{
	int row,col,num;
	char c='A';
	cout<<"Enter the Number : ";
	cin>>num;
		for(row=1;row<=num;row++)
	{
	for(col=1;col<=row;col++)
	{
		cout<<" "<<c;
		c=c+1;
	}
	cout<<"\n";
	c='A';
	}
    return 0;
}


