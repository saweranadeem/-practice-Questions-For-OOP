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

//custom copy constructor for deep copy
student(student &obj){
		this->name=name;  //phly name do
		cgpaPtr=new double; // waha py memory allocate kro
	*cgpaPtr=*obj.cgpaPtr;  //original obj ma cgpa ki jo value the wo store krdo 
}
void getInfo(){
	cout<<"name : " <<name<<endl;
	cout<<"cgpa : " <<*cgpaPtr<<endl;
}
};

int main(){
	student s1("sawaira", 3.52);
//	s1.getInfo();
student s2(s1);
s1.getInfo();
*(s2.cgpaPtr)=9.2;
s2.name="mubeen";
s2.getInfo();
	return 0;
}
