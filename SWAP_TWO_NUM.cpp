//Write a program to swap two numbers.
#include <iostream>
using namespace std;
int main(){
	int no1,no2,temp;
	cout<<"Enter two number for swap:"<<endl;
	cin>>no1>>no2;
    temp=no1;
	no1=no2;
	no2=temp;
	cout<<"The swapped number are: "<<no1<<" "<<no2<<endl;
}
