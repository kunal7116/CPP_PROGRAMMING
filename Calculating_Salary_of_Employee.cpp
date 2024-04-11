//Write a program, which accepts annual basic salary of an employee and calculates and displays the
//Income tax as per the following rules.
//Basic: < 1, 50,000 Tax = 0
//1, 50,000 to 3,00,000 Tax = 20%
//3,00,000 Tax = 30%
#include<iostream>
using namespace std;
int main(){
int basic_salary;
cout<<"Enter basic salary: ";
cin>>basic_salary;
if(basic_salary<=150000){
cout<<"The salary is: "<<basic_salary<<endl;
}
else if(basic_salary>150000 || basic_salary<300000){
basic_salary = (basic_salary*20)/100;
cout<<"The salary is: "<<basic_salary<<endl;
}
else{
basic_salary = (basic_salary*30)/100;
cout<<"The salary is: "<<basic_salary<<endl;
}
}
