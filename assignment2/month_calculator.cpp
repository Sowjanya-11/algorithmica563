#include<iostream>
using namespace std;
int main()
{
	string m;
	cin>>m;
	if(m == "january" || m == "march" || m == "may" || m == "july" || m == "august" || m == "october" || m == "december")
	{
		cout<<"it has 31 days"<<endl;
	}
	else if(m == "february"){
		cout<<"it has 28 or 29 days"<<endl;
	}
	else{
		cout<<"it has 30 days"<<endl;
	}
}

