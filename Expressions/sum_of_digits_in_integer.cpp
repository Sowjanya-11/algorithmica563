#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	cout<<"Enter the integer : ";
	cin>>i;
	int rem,sum = 0;
         rem = i%10;
         sum += rem;
         i = i/10;
        
         rem = i%10;
         sum += rem;
         i = i/10;
    
         rem = i%10;
         sum += rem;
         i = i/10;
         
         rem = i%10;
         sum += rem;
         i = i/10;
         
   cout<<"Sum of 4 digits : "<<sum;
}
