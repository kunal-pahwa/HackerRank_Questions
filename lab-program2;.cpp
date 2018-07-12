#include <iostream>
using namespace std;
class Add{
    
  public:
    Add(int a,int b,int c,int d){
      int e,f;
        e=a+c;
        f=b+d;
        if(f>0){
            cout<<e<<"+"<<f<<"i";
        }
        else
         cout<<e<<"-"<<f<<"i";
        cout<<endl;
  }  
    
};
class sub{
    public:
    sub(int a,int b,int c,int d){
        int e,f;
        e=a-c;
        f=b-d;
        if(f>0){
            cout<<e<<"+"<<f<<"i";
        }
        else
         cout<<e<<"-"<<f<<"i";
          cout<<endl;
    }
};
class mul{
    public:
    mul(int a,int b,int c,int d){
        int e,f;
        e=a*c-b*d;
        f=a*b+b*c;
        if(f>0){
            cout<<e<<"+"<<f<<"i";
        }
        else
         cout<<e<<"-"<<f<<"i";
          cout<<endl;
    }
};
class div{
    public:
    div(int a,int b,int c,int d){
        int e,f,g;
        g=c*c+d*d;
        
        e=a*c+b*d;
        f=b*c-a*d;
        e=e/g;
        f=f/g;
        if(f>0){
            cout<<e<<"+"<<f<<"i";
        }
        else
         cout<<e<<"-"<<f<<"i";
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    Add A(a,b,c,d);
    sub s(a,b,c,d);
   mul M(a,b,c,d);
    div D(a,b,c,d);
    return 0;
}
