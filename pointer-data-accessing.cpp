#include<iostream>
using namespace std;
class student{
	public:
		int a=10;
		int b=1000;
};
int main()
{
	student obj;
	student  *ptr=& obj;
	cout<<ptr->a;
	
}
