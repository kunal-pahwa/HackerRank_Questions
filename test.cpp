#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int A[n1],B[n2],C[n3];
    int height1=0;
    int height2=0;
    int height3=0;
    
    for(int i=n1-1;i>=0;i--){
        cin>>A[i];
        height1=height1+A[i];
    }
    for(int i=n2-1;i>=0;i--){
        cin>>B[i];
        height2=height2+B[i];
    }
    for(int i=n3-1;i>=0;i--){
        cin>>C[i];
        height3=height3+C[i];
    }
    // cout<<height1<<height2<<height3<<endl;
    while(height1!=height2 && height2!=height3 && height1!=height3  ){
        if(height3>height2){
            height3=height3-C[n3-1];
            // cout<<"height3"<<height3<<endl;
            n3--;
        }
        if(height3>height1){
            height3=height3-C[n3-1];
            // cout<<"height3"<<height3<<endl;
            n3--;
        }
        if(height2>height3){
            height2=height2-B[n2-1];
            // cout<<"height2"<<height2<<endl;
            n2--;
        }
        if(height2>height1){
            height2=height2-B[n2-1];
            // cout<<"height2"<<height2<<endl;
            n2--;
        }
        if(height1>height2){
            height1=height1-A[n1-1];
            // cout<<"height1"<<height1<<endl;
            n1--;
        }
        if(height1>height3){
            height1=height1-A[n1-1];
            // cout<<"height1"<<height1<<endl;
            n1--;
        }
         if(n1==0 || n2==0 || n3==0){
                break;
   }
    }
   if(n1==0 || n2==0 || n3==0){
       cout<<"0";
   }
    else
    cout<<height1;
}
