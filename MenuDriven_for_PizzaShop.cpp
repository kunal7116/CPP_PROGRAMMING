//Create menu driven program for Pizza Shop.And display total amount
#include<iostream>
using namespace std;
int main(){
	int i,n,ch,tot;
	cout<<"-------Menu-------"<<endl;
	cout<<"1.Margretia Pizza Rs250 2.Cheese Burst Pizza Rs300 3.Plain Pizza Rs100"<<endl;
	
	while(ch!=4){
	cout<<"Enter your choice:";
	cin>>ch;	
	switch(ch){
		case 1:
			cout<<"Enter the quantity of pizza: ";
			cin>>n;
			tot+=250*n;
			break;
			
		case 2:
			cout<<"Enter the quantity of pizza: ";
			cin>>n;
			tot+=300*n;
			break;
			
		case 3:
			cout<<"Enter the quantity of pizza: ";
			cin>>n;
			tot+=100*n;
			break;
}
				
	}
	cout<<"Total bill: "<<tot;
	
}
