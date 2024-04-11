//Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3
#include<iostream>
using namespace std;
int main(){
	int i,m,n,result=1;
	cout<<"Enter the Number and power:";
	cin>>m>>n;
	for(i=1;i<=n;i++){
		result = result *m;
	}
	cout<<"Answer:"<<result;
}
