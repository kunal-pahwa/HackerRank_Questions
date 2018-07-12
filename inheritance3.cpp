#include<iostream>
using namespace std;
class A{
	public:
	void aa(){
		cout<<"snsdaj";
	}
};
class B{
	public:
	void bb(){
	cout<<"abdsj";
	}	
};
class C{
	public:
	void cc(){
		cout<<"jsfkfasn";
	}
};
class D: public A, public B, public C{
	
}; 
int main()
{
	D obj;
	obj.bb();
}
