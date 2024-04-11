//Write a  program to input angles of a triangle and check whether triangle is valid or not.
#include<iostream>
using namespace std;
int main(){
int n1,n2,n3,sum;
cout<<"Enter three angles of Triangle:"<<endl;
cin>>n1>>n2>>n3;
if(n1!=0&&n2!=0&&n3!=0){
	sum=n1+n2+n3;
	if(sum==180){		
	cout<<"Triangle is valid!"<<endl;
}
}
else{
	cout<<"Triangle is not valid!"<<endl;
}
}
