#include<iostream >
using namespace std;
main()
{
	int r,c;
	cout<<"Enter the no.of Rows of Matrices    : ";
	cin>>r;
	cout<<"Enter the no.of Columns of Matrices : ";
	cin>>c;
	
	int A[r][c],B[r][c],C[r][c]={0};
	
	cout<<"Enter the elements of Matrix 'A' :- \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		cin>>A[i][j];
	}
	
	cout<<"Enter the elements of Matrix 'B' :- \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		cin>>B[i][j];
	}
	
	cout<<"\n";
	cout<<"The sum of Matrix 'A' and 'B' is :- \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
			cout<<C[i][j];
			cout<<" ";
		}
	    cout<<"\n";
	}
	return 0;
}
