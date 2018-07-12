 #include<iostream>
 using namespace std;
 class base{
 	public:
 		int a=0;
 };
 class sub:public base{
 	public:
 		int b=a;
 		
 };
 int main(){
 	sub obj;
 	cout<<obj.b;
 }
