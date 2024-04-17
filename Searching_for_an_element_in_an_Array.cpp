//Write a program to accept array  from user .Accept number from user and search number is present in array or not.
#include<iostream>
using namespace std;
int main()
{
	int a[20],n,m;
	bool status=false;
	cout<<"Enter the length of the array: ";
	cin>>n;
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	cout<<"Enter the number to be searched: ";
	cin>>m;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			status=true;
		}
	}
	if(status)
		cout<<"Entered element is in array!";
	else
		cout<<"Entered element is not available in array!"<<endl;
}
