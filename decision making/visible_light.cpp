#include<iostream>
using namespace std;
int main(){
	int i;
	cin>>i;
	if(i>=380 && i<=450){
		cout<<"Violet";
	}
	else if(i>=450 && i<=495){
		cout<<"Blue";
	}
	else if(i>=495 && i<=570){
		cout<<"Green";
	}
	else if(i>=570 && i<=590){
		cout<<"Yellow";
	}
	else if(i>=590 && i<=620){
		cout<<"Orange";
	}
	else if(i>=620 && i<=750){
		cout<<"blue";
	}
	else{
		cout<<"error message";
	}
}
