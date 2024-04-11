//Check if number is a prime number or not.: 
#include<iostream>
using namespace std;
int main(){
int i, num;
bool flag=true;
cout<<"Enter the number: ";
cin>>num;
for(i=2;i<num;i++){
	if (num%i==0){	
	flag = false;
	break;
	}
	else
	{
		flag = true;
	}
}
	if(flag){
		cout<<"Its prime";
	}
	else{
		cout<<"Its not prime";
	}

}
