#include<iostream>
#include<string>
using namespace std;
class person{
	public:
	string name;
	int age;
	//parametrize constructor
	person(string name, int age){
		this->name=name;
		this->age=age;
	}
};
class student:public person{
	public:
	int rollNum;
	//parametrize constructor //parent ki property chuld ma ja ri h eslya hm yaha dono constructor likhy gy : lga k
	student(string name, int age,int rollNum):person(name,age){//yaha py parent k costructor phly call hoga
		this->rollNum=rollNum;
	}
	void getInfo(){
		cout<<"Name "<< name <<endl;
		cout<<"Age "<< age<< endl;
		cout<<"Roll-Number "<< rollNum;
	}
};
int main(){
	student s1("sawaira", 23, 123);
	s1.getInfo();
	return 0;
}


