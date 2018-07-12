#include<iostream>
using namespace std;
class base{
	public:
	int a=10;
	int b=5;
	void fun(){
		cout<<"sadfasd";
	}
	
};
class Derived:public base{
	public:
	void fun(){
		cout<<"i am in derived";
	}
	
};
int main()
{
	Derived b1;
	
	b1.base::fun();
}
