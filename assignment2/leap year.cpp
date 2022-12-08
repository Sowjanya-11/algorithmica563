#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a year:";
	cin>>num;
	if((num%100!=0 && num%4==0) || num%400==0)
	{
		cout<<"leap year";
	}
	else
	{
		cout<<"not leap year";
	}
}			
