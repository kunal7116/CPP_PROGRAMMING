//Check whether the number is palindrome or not?
#include<iostream>
using namespace std;
int main()
{
	int n, temp,m, rev=0;
	cout<<"Enter your number: ";
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		m=temp%10;
		rev=rev*10+m;
		temp=temp/10;
	}
	if(rev==n)
		cout<<n<<" Is a palindrome."<<endl;
	else
		cout<<n<<" Is not a palindrome."<<endl;
}
