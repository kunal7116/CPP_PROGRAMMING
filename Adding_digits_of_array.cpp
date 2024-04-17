//Write a program to Accept a number and display its sum of digits.:ex 568    5+6+8
#include<iostream>
using namespace std;
int sumdigit(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
	return sum;
}

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Sum of digits of "<<n<<" : "<<sumdigit(n);
}
