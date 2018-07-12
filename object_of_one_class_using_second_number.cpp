#include<iostream>
using namespace std;
class A{
	public:
		void getdata()
		{
			cout<<"dasnk";
		}
};
class B{
	public:
	
		void getdata()
		{
			cout<<"1323312";
		}
};
class C{
	public:
	B obj2;
	A obj1;
	C(){
		obj1.getdata();
		cout<<endl;
		obj2.getdata();
	}
};
int main()
{
	C obj1;
	return 0;
}
