//<------------Ambiguity in class------------->
// this may happen due same name return type and arguement function has been 
// made more than one while inheriting class
#include<iostream>
using namespace std;

class A{
	public:
		void greet(){
			cout<<"hello_world: "<<endl;
		}
};
class B{
	public:
		void greet(){
			cout<<"Bye_world: "<<endl;
		}
};
class c : public A, public B{
	int a;
	public:
	void greet(){
	A::greet();   //A <--> B
	}
};
class D : public A, public B{
	int a ;
	public:
		void greet(){
			cout <<"this is derived class greet fn called:"<<endl;  //observation think here.
		}
};
int main(){
	c c1;
	c1.greet();
	D d1;
	d1.greet();
}