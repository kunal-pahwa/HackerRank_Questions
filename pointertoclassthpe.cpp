#include<iostream>
using namespace std;
class x{
	public:
		int a;
		void f(int b)
		{
			cout<<"value of b is "<<b;
		}
};
int main(){
	int x::a*ptr=&a;
	
}

