#include<iostream>
#include<string>
using namespace std;
class student{
public:
	string name;
	double* cgpaPtr;   //create pointer
//	parametrized constructor
	student(string name , double cgpa){
		this->name=name;
		cgpaPtr=new double;
		*cgpaPtr=cgpa;
}	

//	//custom constructor
//	student(student &obj){
//	this->name=obj.name;
//	this->cgpaPtr=obj.cgpaPtr; 
//}
void getInfo(){
	cout<<"name : " <<name<<endl;
	cout<<"cgpa : " <<*cgpaPtr<<endl;
}
};

int main(){
	student s1("sawaira", 3.52);
//	s1.getInfo();
student s2(s1);
s2.getInfo();
	return 0;
}
