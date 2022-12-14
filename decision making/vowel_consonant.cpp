#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		cout<<ch<<" is a vowel"<<endl;
	}
	else if(ch == 'y'){
		cout<<"sometimes y is vowel and sometimes y is consonant"<<endl;
   }
   else{
		cout<<ch<<" is a consonant"<<endl;
	}
}
