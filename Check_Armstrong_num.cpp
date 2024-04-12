//Write a program to check entered number is Armstrong number or not.
#include<iostream>
using namespace std;
int main(){
	int num,rem,sum=0,temp;
	cout<<"Enter the number:";
	cin>>num;
	temp=num;
	for (int i=0;i<=num;i++){
		rem= num%10;
		sum = sum + (rem*rem*rem);
		num = num/10;
	}
	if (temp==sum){
		cout<<"The number is amstrong number";
	}
	else{
		cout<<"The is not amstrong number";
	}
}
