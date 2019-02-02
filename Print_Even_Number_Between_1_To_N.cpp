#include<iostream>
using namespace std;
int main()
{
	int num,n;
	cout<<"Enter the number upto which Even Number print : ";
	cin>>n;
	cout<<"Even Numbers from 1 to "<<n<<" are :-\n";
	for(num=1;num<=n;num++)
	{
		if(num%2==0)
		cout<<num<<"  ";
	}
return 0;
}
