#include<iostream>
using namespace std;
int main() {
	float s;
	cout<<"value of radius: ";
	cin>>s;
	float area = 3.14159*s*s;
	float volume = 1.333*3.14159*(s*s*s);
	cout<<"Area of circle "<<area<<endl;
	cout<<"Volume of sphere "<<volume<<endl;
}
