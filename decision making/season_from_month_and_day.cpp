#include<iostream>
using namespace std;
int main()
{
	string month;
	int num;
	cout<<"enter month and date:";
	cin>>month>>num;
	if(month == "march"){
		if(num>=20){
			cout<<"spring";
		}
	}
	else if(month == "april" || month == "may"){
		cout<<"spring";
	}
	else if(month == "june"){
		if(num<21){
			cout<<"spring";
		}
		else{
			cout<<"summer";
		}
	}
    if(month == "july" || month == "august"){
		cout<<"summer";
	}
	else if(month == "september"){
		if(num<22){
			cout<<"summer";
		}
		else{
			cout<<"fall";
		}
	}
    if(month == "october" || month == "november"){
		cout<<"fall";
	}
	else if(month == "december"){
		if(num<21){
			cout<<"fall";
		}
		else{
			cout<<"winter";
		}
	}
    if(month == "january" || month == "february"){
		cout<<"winter";
	}
	else if(month == "march"){
		if(num<20){
			cout<<"winter";
		}
		else{
			cout<<"spring";
		}
	}
}
	    
   											
