//Write a  program to enter a number and print its reverse.
#include<iostream>
using namespace std;
int main()
{
	int n,temp,rev=0;
	cout<<"Enter the number to be reversed:"<<endl;
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		rev=rev*10+temp%10;
		temp=temp/10;
	}
	cout<<"Reverse of "<<n<<" = "<<rev<<endl;

}
