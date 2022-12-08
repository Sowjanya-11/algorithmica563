#include<iostream>
using namespace std;
int main()
{
	string c;
	cout<<"Enter the position:";
	cin>>c;
	if(c[0] == 'a' || c[0] == 'c' || c[0] == 'e' || c[0] == 'g')
	{
		if(c[1] == '1' || c[1] == '3' || c[1] == '5' || c[1] == '7')  //(c[1]%2 != 0) or (c[1]%2 == 1)
		{
			cout<<"square is black";
		}
		else
		{
			cout<<"square is white";
		}
    }
		else
		{
			
		 if(c[1] == '2' || c[1] == '4' || c[1] == '6' || c[1] == '8')   //(c[1]%2 != 0)  or (c[1]%2 == 1)
		{
			cout<<"square is black";
		}
		else
		{
			cout<<"square is white";
		}
	}
}
	
