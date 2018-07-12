#include<iostream>
using namespace std;

class swa{
    public:
    swa(int *a,int *b){
        int temp;
		temp=*a;
        *a=*b;
        *b=temp;
    }
};

int main() {
    int a,b;
    cin>>a>>b;
   	swa s(&a,&b);
    
    cout<<a<<b;
    return 0;
}
