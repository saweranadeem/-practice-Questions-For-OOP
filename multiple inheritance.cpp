#include<iostream>
#include<string>
using namespace std;
//inheritance in which aik child class k andre 2 parent class ki propert inherit hoti haa
class sutdent{
	public:
	string name;
	int rollNum;
};
class teacher{
	public:
	int salary;
	string subj;
};
class TA :public sutdent, public teacher{
};
int main(){
    TA t1;
    t1.name="shehzadi";
    t1.subj="physics";
    cout<<t1.name<<endl;
    cout<<t1.subj<<endl;
	return 0;
}


