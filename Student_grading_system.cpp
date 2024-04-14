//Write a program to create student class with data members rollno, marks1,mark2,mark3. Accept data (acceptInfo()) and display  using display member function.Also display total,percentage and grade
#include<iostream>
using namespace std;
class student{
	private: int rollno,m1,m2,m3;
	public:void acceptInfo();
	public:void display();
};

void student::acceptInfo(){
	int rollno,m1,m2,m3;
	cout<<"Enter the Roll no of student: "<<endl;
	cin>>rollno;
	cout<<"Enter marks of three subjects: "<<endl;
	cin>>m1>>m2>>m3;
}
void student::display(){
	int rollno,m1,m2,m3;
	float tot,per;
	char c;
	cout<<"Roll no of student: "<<rollno<<endl;
	cout<<"Marks of three subjects are: "<<m1<<endl;
	cout<<m2<<endl;
	cout<<m3<<endl;
	tot=m1+m2+m3;
	cout<<"Total marks: "<<tot<<endl;
	per = (tot/300)*100;
	cout<<"Percentage: "<<per<<endl;
	if(per>=90){
		cout<<"Grade A"<<endl;
	}
	else if(per>=80 && per<90){
		cout<<"Grade B"<<endl;
	}
	else{
		cout<<"Grade C";
	}
}
int main(){
	student s;
	s.acceptInfo();
	s.display();
}
