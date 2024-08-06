#include<iostream>
#include<string>
using namespace std;
class print{
	public:
	void show(int x){
			cout<<"int: "<<x;
		}
	void show(char ch){
			cout<<"char: "<<ch;
		}
	};
	int main(){
		print p1;
		p1.show('&');
        return 0 ; 
	}
