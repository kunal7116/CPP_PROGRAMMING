//Create a class Person with data members as name, age, city. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class. 
#include<iostream>
#include<string.h>
using namespace std;
class person{
	private:string name;
	        int age;
	        string city;      
	public:person(){
	cout<<"------default--------"<<endl;
	this->name="xyz";
	this->age=10;
	this->city="abc";
	cout<<"Person got created";
	
	}
		person(string name, int age, string city){
			this->name=name;	
			this->age=age;
			this->city=city;
			cout<<"Person created";
		}  
	void assignValue(string name,int age,string city){
		this->name= name;
		this->age=age;
		this->city=city;
	}
	void display(){
		cout<<"\nName: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"city: "<<city<<endl;
	}
	void setName(string name){
		this->name=name;
	}
	void setAge(int age){
		this->age=age;
	}
	void setCity(string city){
		this->city=city;
	}
	string getName(){
		return name;
	}
	int getAge(){
		return age;
	}
	string getCity(){
		return city;
	}
};
int main(){
	person p1("Kunal",23,"Surat");
	p1.display();
	cout<<"\n\n-----After setter called-------"<<endl;
	p1.setName("Harshal");
	p1.setAge(28);
	p1.setCity("Nagpur");
	p1.display();
	cout<<"\n\n-------After getter called------"<<endl;
	cout<<p1.getName()<<endl;
	cout<<p1.getAge()<<endl;
	cout<<p1.getCity()<<endl;
}
