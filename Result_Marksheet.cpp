#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the No.of Subjects : ";
	cin>>n;
	float M[n],per,sum=0;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the Marks of Subject "<<i+1<<" : ";
		cin>>M[i];
		sum=sum+M[i];
	}
	cout<<"----------------------------------\n";
	cout<<"Total Marks  : "<<sum<<"/"<<(n*100);
	per=(sum/(n*100))*100;
	cout<<"\nResult       : "<<per<<"%";
	if(per>=91 && per<=100)
	{
		cout<<"\nGrade        : A+";
		cout<<"\nStatus       : Pass";
	}
	
	else if(per>=81 && per<=90)
	{
		cout<<"\nGrade        : A";
		cout<<"\nStatus       : Pass";
	}
	
	else if(per>=71 && per<=80)
	{
		cout<<"\nGrade        : B+";
		cout<<"\nStatus       : Pass";
	}
	
    else if(per>=61 && per<=70)
	{
		cout<<"\nGrade        : B";
		cout<<"\nStatus       : Pass";
	}
	
	else if(per>=51 && per<=60)
	{
		cout<<"\nGrade        : C+";
		cout<<"\nStatus       : Pass";
	}
	
	else if(per>=41 && per<=50)
	{
		cout<<"\nGrade        : C";
		cout<<"\nStatus       : Pass";
	}
	
	else if(per>=33 && per<=40)
	{
		cout<<"\nGrade        : D";
		cout<<"\nStatus       : Pass";
	}
	
	else
	{
		cout<<"\nGrade        : E";
		cout<<"\nStatus       : FAIL";
	}
	return 0;
	
}
