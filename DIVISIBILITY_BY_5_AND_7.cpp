//Write a program to accept a number and check if it is divisible by 5 and 7.
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	if (num%5==0 && num%7==0){
		cout<<"The number is divisible by both 5 and 7"<<endl;
	}
	else if (num%5==0){
		cout<<"The number is divisble by only 5"<<endl;
	
	}
	else if(num%7==0){
		cout<<"The number is divisbile by only 7"<<endl;
	}
	else{
		cout<<"The number is not divisble by 5 and 7"<<endl;
	}
}
