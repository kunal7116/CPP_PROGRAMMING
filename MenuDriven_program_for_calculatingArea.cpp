//Write a menu driven program to do following operations:
//a) Compute area of circle
//b) Compute area of rectangle
//c) Compute area of triangle
//d) Exit
//Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
//operation. Continue this process until user selects exit option.
#include<iostream>
#define PI 3.14
using namespace std;
int areaOfCircle(int r){
	float a;
	a = PI * r * r;
	cout<<"Area of circle is: "<<a<<endl;
}
int areaOfRectangle(int l, int b){
	int a;
	a = l*b;
	cout<<"Area of rectangle is: "<<a<<endl;
}
int areaOfTriangle(int h, int b){
    float a;
	a = (h * b)/2;
	cout<<"Area of triangle is: "<<a<<endl;
}
int main(){
	int radius,length,breadth,height,base;
	int ch;
	cout<<"1.Area of circle"<<endl;
	cout<<"2.Area of rectangle"<<endl;
	cout<<"3.Area of triangle"<<endl;
	cout<<"Exit"<<endl;

	do{
			cout<<"Enter Your Choice: ";
	cin>>ch;
		switch(ch){
			case 1: 
			cout<<"Enter Radius of circle: ";
			cin>>radius;
			areaOfCircle(radius);
			break;
			case 2:
			cout<<"Enter length and breadth of recctangle: ";
			cin>>length>>breadth;
			areaOfRectangle(length,breadth);
			break;
			case 3:
			cout<<"Enter the height and base of triangle: ";
			cin>>height>>base;
			areaOfTriangle(height,base);
			break;
			case 4:
				cout<<"Finish!!";
			exit(0);
			default:
			cout<<"Enter valid input!"<<endl;			
		
	}
	}while(ch!=4);	
	
}
