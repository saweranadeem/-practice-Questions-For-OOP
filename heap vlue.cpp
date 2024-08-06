#include<iostream>
#include<string>
using namespace std;
class student{
public:
	string name;
	double* cgpaPtr;   //create pointer
	student(string name , double cgpa){
		this->name=name;
		cgpaPtr=new double;//HEAP MA DOUBLE TYPE K DATA STORE KRDO
		*cgpaPtr=cgpa; // POINTER ADDRESS PY JA K US VALUE KO STORE KRDO
}	

	//custom constructor
	student(student &obj){
	this->name=obj.name;
	cgpaPtr=new double;
//	*cgpaPtr=*obj.cgpaPtr; 
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
//s2.name="mubeen";
s2.getInfo();

	return 0;
}
