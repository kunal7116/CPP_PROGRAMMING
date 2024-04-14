//Accept two numbers and calculate GCD of them.
#include<iostream>
using namespace std;
int gcdOfTwoNumber(int n1, int n2){
	int gcd;
	for (int i=1;i<=n1&&i<=n2;i++){
		if(n1%i==0 && n2%i==0){
			gcd=i;
		}
	}
	cout<<"Greatest common divsior: "<<gcd<<endl;
}

int main()
{
	int num1,num2;
	cout<<"Enter the two number of which you want to find gcd: ";
	cin>>num1>>num2;
	gcdOfTwoNumber(num1,num2);
}
