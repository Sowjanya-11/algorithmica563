#include<iostream>
using namespace std;
int main()
{
	int t1,t2;
	cin>>t1>>t2;
	float deposit = t1*0.25 + t2*0.50;
	printf("refund recived: $ %.2f",deposit);
}

