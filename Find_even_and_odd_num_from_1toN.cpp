//Write a  program to find sum of all even and odd numbers between 1 to n.
#include<iostream>
using namespace std;
int main(){
	int n,sum=0,sum1=0;
	cout<<"Enter the number: ";
	cin>>n;
	for(int i=0;i<=n;i++){
		if(i%2==0){
			sum = sum +i;
		}
	}
	cout<<"The addition of even num is: "<<sum<<endl;
	for(int j=0;j<=n;j++){
		if(j%2==1){
			sum1 = sum1 + j;
		}
	}
	cout<<"The addition of odd num is: "<<sum1;
}
