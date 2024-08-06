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
Teacher(){    //constructor create  //it is a non parametrized constructor
//	cout<<"Hi , i am constructor" <<endl;
	dept="computer science";  //initilize the data members of object
}
//parametrized constructor
//Teacher(string n , string s , double sal){
//	name=n;
//	sbj=s;
//	salary=sal;
//	
//}
//
//void getinfo(){
//	cout<<"Name: " <<name<<endl;
//	cout<<"subj: "<<sbj<<endl;
//	cout<<"salary "<<salary;
//}

};
int main(){
//	Teacher t1("sawaira" , "cemistry" , 2500); //constructor call
//	Teacher t2(t1); //default copy constructor where we copy the value of 1 obj into another
//	t2.getinfo();
Teacher t1;
cout<<"Departement: " <<t1.dept;
}

