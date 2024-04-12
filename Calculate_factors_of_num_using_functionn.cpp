//Write a program to calculate factors of a given number.
#include<iostream>
using namespace std;
int factorOfNum(int n, int i){
	for(i=1;i<=n;i++){
		if(n%i==0){
			cout<<"Factors are: "<<i<<endl;
		}
	}
}
int main(){
	int num;
	int fact;
	cout<<"Enter the number of which you want to find factors: ";
	cin>>num;
	factorOfNum(num,fact);
	
}
