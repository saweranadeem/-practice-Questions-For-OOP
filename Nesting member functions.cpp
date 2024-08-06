#include<iostream>
#include<string>
using namespace std;
class binaryNum{
//jin member ko hm private kr dytay h usko hm min k bahir acces nhi krskty unko sirf usi class k member funtion access krskty h not anywhere they used	
	private:
	string s;
	public:
		void read(void);
		void check(void);
		void compliment(void);
		void display(void);
};
//class k bahir in functions ko definations likho
void binaryNum::read(void){
	cout<<"Enter a num";
	cin>>s;
} 
void binaryNum::check(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!= '0' && s.at(i)!='1' ){
			cout<<"not a binary numb";
			exit(0);
		}
	}
}

void binaryNum::compliment(void){
		check();  //function inside function is call there is no need of define function in main side 
		for(int i=0;i<s.length();i++){
			if(s.at(i)=='0'){
				s.at(i)='1';
			}
			else{
	        s.at(i)='0';			
	}
}
}
void binaryNum::display(void){
	cout<<"display binary num"<<endl;
		for(int i=0;i<s.length();i++){
			cout<<s.at(i);
		}
		cout<<endl;
	}
int main(){
	binaryNum b;
	b.read();
//	b.check();
	b.display();
	b.compliment();
	b.display();
	
}
