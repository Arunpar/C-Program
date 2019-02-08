#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"Enter the Year\n";
cin>>year;
if((year%4==0)&&(year%100!=0))
cout<<"LEAP YEAR";
else if(year%100==0)
cout<<"NOT LEAP YEAR";
else if(year%400==0)
cout<<"LEAP YEAR";
else
cout<<"NOT LEAP YEAR";
return 0;
}
