#include<iostream>
using namespace std;
int main()
{
	char ch;
	int c;
	do
	{
		cout<<"Enter Any Alphabet : ";
		cin>>ch;
		if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
		cout<<"Vovel";
		else
		cout<<"Consonant";
		cout<<"\nEnter 1 to Continue : ";
		cin>>c;
		cout<<"------------------------\n";
	}
	while(c==1);
	return 0;
}
