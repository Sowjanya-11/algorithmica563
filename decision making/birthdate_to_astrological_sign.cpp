#include<iostream>
using namespace std;
int main()
{
	int n;
	string m;
	cout<<"enter month and day of birth:";
	cin>>m>>n;
	if(m == "jan"){
		if(n<=19){
			cout<<"capricorn";
		}
		else{
			cout<<"aquarius";
		}
	}
	if(m == "feb"){
		if(n<=18){
			cout<<"aquarius";
		}
		else{
			cout<<"pisces";
		}
	}
	if(m == "march"){
		if(n<=20){
			cout<<"pisces";
		}
		else{
			cout<<"aries";
		}
	}
	if(m == "april"){
		if(n<=19){
			cout<<"aries";
		}
		else{
			cout<<"taurus";
		}
	}
	if(m == "may"){
		if(n<=20){
			cout<<"taurus";
		}
		else{
			cout<<"gemini";
		}
	}
	if(m == "june"){
		if(n<=20){
			cout<<"gemini";
		}
		else{
			cout<<"cancer";
		}
	}
	if(m == "july"){
		if(n<=22){
			cout<<"cancer";
		}
		else{
			cout<<"leo";
		}
	}
	if(m == "aug"){
		if(n<=22){
			cout<<"leo";
		}
		else{
			cout<<"virgo";
		}
	}
	if(m == "sept"){
		if(n<=22){
			cout<<"virgo";
		}
		else{
			cout<<"libra";
		}
	}
	if(m == "oct"){
		if(n<=22){
			cout<<"libra";
		}
		else{
			cout<<"scorpio";
		}
	}
	if(m == "nov"){
		if(n<=21){
			cout<<"scorpio";
		}
		else{
			cout<<"sagittarius";
		}
	}
		if(m == "dec"){
		if(n<=21){
			cout<<"sagittarius";
		}
		else{
			cout<<"capricorn";
		}
	}
}
