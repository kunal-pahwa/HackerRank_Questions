#include<iostream>
using namespace std;
class first{
	protected:
	int b;
	public:
	first(){
		b=10;
		
	}	
	virtual void display()
	{
		cout<<"dsnk";
	}
};
class second:public first{
	int d;
	public:
		second(){
			d=20;
		}
		void display(){
			cout<<"\n b="<<b<<"d is"<<d;
		}
};

int main()
{
	first *p;
	second s;
	first d;
	d.display();
	p=&s;
	p->display();
	return 0;
}
