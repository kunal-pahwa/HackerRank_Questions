#include<iostream>
using namespace std;
class A{
	//static int a;
	int b;
	
	float d;
	char e[5];
};
//int A::a=0;
int main()
{
	A obj;
	printf("%d",sizeof(obj));
}
