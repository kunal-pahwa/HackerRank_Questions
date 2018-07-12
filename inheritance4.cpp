#include<iostream>
using namespace std;
class base{
	public:
		void print(){
			cout<<"print base";
		}
		
};
class sub:public base{
	public: 
	base::print();
	void print(){
		cout<<"nadsdkjn";
	}
};
int main(){
	sub obj;
	obj.base::print();
}
