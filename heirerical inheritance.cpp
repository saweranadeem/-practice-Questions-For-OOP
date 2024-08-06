#include<iostream>
#include<string>
using namespace std;
//in this type of inheritance property of parent inherited in multiple child
class person{
	public:
	string name;
	int age;
};
class student:public person{
	public:
	int rollNum;

};
class teacher:public person{
	public:
		int salary;
};
int main(){
	teacher t1;
	t1.name="sawaira";
	t1.age=23;
	cout<<t1.name<<endl;
	cout<<t1.age<<endl;

	return 0;
}


