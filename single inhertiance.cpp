#include<iostream>
#include<string>
using namespace std;
class person{
	public:
	string name;
	int age;
};
class student:public person{
	public:
	int rollNum;
	void getInfo(){
		cout<<"Name "<< name <<endl;
		cout<<"Age "<< age<< endl;
		cout<<"Roll-Number "<< rollNum;
	}
};
int main(){
	student s1;
	s1.name="sawaira";
	s1.age=23;
	s1.rollNum=113;
	s1.getInfo();
	return 0;
}


