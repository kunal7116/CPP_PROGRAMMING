//Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120
#include<iostream>
using namespace std;
int main18(){
	int i,num,fact=1;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	for(i=1;i<=num;i++){
		fact = fact*i;
	}
	cout<<"The factorial is:"<<fact<<endl;
}
