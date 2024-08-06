#include<iostream>
#include<string>
using namespace std;
class parent{
	public:
	void getInfo(){
	cout<<"parent";
	}
	};
	class child:public parent{
	public:
    void getInfo(){
	cout<<"child";
	}
	};
	int main(){
		child c1;
		c1.getInfo();
		return 0;
	}
	
