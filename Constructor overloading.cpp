#include<iostream>
#include<string>
using namespace std;
class show{
	public:
		string name;
		int age;
		show(){
			cout<<"Non-Parametrize constructor";
		}
		show(string name , int age){
			this->name=name;
			this->age=age;
			cout<<"parametrized constructor";
		}
};
int main()
{
//	show s1("sawaira" , 123);
show ();
	return 0;
}
