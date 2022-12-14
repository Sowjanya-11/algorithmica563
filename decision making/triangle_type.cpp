#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a == b && b == c)
	{
		cout<<"it is a equilateral triangle"<<endl;
	}
	else if(a == b || a == c || b == c){
		cout<<"it is a isoceles triangle"<<endl;
	}
	else{
		cout<<"it is a scalene triangle"<<endl;
	}
}
