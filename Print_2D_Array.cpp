#include<iostream >
using namespace std;
main()
{
	int r,c;
	cout<<"Enter the no.of Rows    : ";
	cin>>r;
	cout<<"Enter the no.of Columns : ";
	cin>>c;
	int a[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"Enter the Elements of position "<<i<<j<<" : ";
		    cin>>a[i][j];
	    }
	}
	cout<<"\n";
	cout<<"The Matrix formed is :- \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		    cout<<a[i][j]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
