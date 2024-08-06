#include<iostream>
#include<string>
using namespace std;
//we have created class with teacher name 
class Teacher{
	//Data member's
private:	// if we make salary private it is not accessible outside the class
double salary;	
public:  	// if we make salary public it is accessible outside the class
string name;
string dept;
string sbj;


    //Memeber's Function
void changDept(string newDept){
	dept=newDept;
}
    //as salary is private member soo wo make the salary public by making its member function soo that it can indirectly accessible
//Setter
void setSalary(double s){
		salary=s;
} 
//getter
double getSalary(){
		return salary;
}
};
int main(){
	Teacher t1;
	t1.name="sawaira\n";
	t1.dept="computer science";
	t1.setSalary(2500);

	cout<<t1.name;
	cout<<t1.dept <<endl;
cout << t1.getSalary();
return 0;
}
