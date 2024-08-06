#include<iostream>
#include<string>
using namespace std;
//we have created class with teacher name 
class Teacher{
	//Data member's
public:  	// if we make salary public it is accessible outside the class
string name;
string dept;
string sbj;
double salary;
//parametrized constructor
Teacher(string name , string sbj , double salary){
//	object property==constructor parameter
	this->name=name;
	this->sbj=sbj;
	this->salary=salary;
	
}

void getinfo(){
	cout<<"Name: " <<name<<endl;
	cout<<"subj: "<<sbj<<endl;
	cout<<"salary "<<salary;
}

};
int main(){
	Teacher t1("sawaira" , "cemistry" , 2500); //constructor call
//	t1.getinfo();
Teacher t2(t1); // default copy constructor call
t2.getinfo();
}
