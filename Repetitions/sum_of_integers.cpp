#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the n value : ";
	cin>>n;
	int i = 1;
	int sum = 0;
	while(i<=n)
    {
         sum = sum + i;
         i = i + 1; 
	}
	cout<<"Sum of first n integers: "<<sum<<endl;
	
}
