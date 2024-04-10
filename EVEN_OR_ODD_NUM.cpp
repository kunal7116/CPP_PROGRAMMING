//Write a program to accept an integer and check if it is even or odd
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	if(num%2==0){
		cout<<"The number is even"<<endl;
	}
	else{
		cout<<"The number is odd"<<endl;
	}
	
}
