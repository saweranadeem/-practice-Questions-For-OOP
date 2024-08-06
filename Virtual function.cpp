#include<iostream>
#include<string>
using namespace std;
class parent{
	public:
		virtual hello(){
			cout<<"hi virtual function call";
		}
		
};
class child :public parent{
	public:
		hello(){
			cout<<"hi override virtual function";
		}
};
int main(){
	child c1;
	c1.hello();
}
