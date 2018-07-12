#include<iostream>

#include<iomanip>

using namespace std;

class emp

{  protected:

    char name[100];

    int age;

    int sal;

public:

    void read()

    {     fflush(stdin);

            std::cin.getline(name,100);

            cin>>age;

               cin>>sal;

    }

    virtual void clerk(){}

};
class Abc:public emp{
	public:
	Abc(){
		//emp e;
		
		cout<<name<<"asdb1"<<endl;
		cout<<age<<"asdb2"<<endl;
		cout<<sal<<"asdb3"<<endl;
	}
	
};
int main()
{
	emp e;
	e.read();
	Abc ab;
}
