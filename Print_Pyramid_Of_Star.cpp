#include<iostream>
using namespace std;
int main()
{
	int row,col,num,space;
	cout<<"Enter the size of Pyramid :";
	cin>>num;
	for(row=1;row<=num;row++)
	{
		for(space=num-1;space>=row;space--)
		{
			cout<<" ";
		}
		for(col=1;col<=2*row-1;col++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
return 0;
}
