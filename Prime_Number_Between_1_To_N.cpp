#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter the Number upto which Prime Number print : ";
	cin>>n;
	cout<<"Prime numbers between 1 to "<<n<<" are :-\n";
	for(j=2;j<=n;j++)
	{
        for(i=2;i<=j;i++)
	    {
		    if (j%i==0)
	        break;
	        else if(j==i+1)
            cout<<j<<" ";
        }
    }
	return 0;
}
