#include<iostream>
#include<string>
using namespace std;
//inheritance in which bht sary level py inheritance chal raha hota haa
class person{
	public:
	string name;
	int age;
};
class student:public person{
	public:
	int rollNum;
};
class gradeStn:public student{
	public:
		string researhArea;
};
int main(){
     gradeStn s1;
     s1.name="sawaira";
     s1.age=23;
     s1.rollNum=123;
     cout<<s1.age<<endl;
     cout<<s1.name<<endl;
     cout<<s1.rollNum<<endl;
	return 0;
}


