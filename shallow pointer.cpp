#include<iostream>
#include<string>
using namespace std;
class student{
public:
	string name;
	double cgpa;  
	
//	parametrize constructor
student(string name , double cgpa){
//object property=constructor parameter
	this->name=name;
	this->cgpa=cgpa; 
}

//custom constructor
student(student &orgObj){
	this->name=orgObj.name;
	this->cgpa=orgObj.cgpa; 
}

void getInfo(){
	cout<<"name : " <<name<<endl;
	cout<<"cgpa : " <<cgpa<<endl;
}
};

int main(){
	student s1("sawaira", 3.52);
//	s1.getInfo();
student s2(s1);
s2.getInfo();
	return 0;
}
