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

Teacher(string name , string sbj , double salary){
// class k andre object property ko asign krdo =constructor parameter
	this->name=name;
	this->sbj=sbj;
	this->salary=salary;
	
}
//custom copy  constructor
// ORIGINAL OBJECT AYE GAAA &OBJ KRY GY
Teacher(Teacher &orgObj){
//	OBJ pROPERTY=CUSTOM PARAMTETER
	this->name=orgObj.name;
	this->sbj=orgObj.sbj;
	this->salary=orgObj.salary;
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
Teacher t2(t1); // custom copy constructor call
t2.getinfo();
}
