#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int B[n];
      for(int i=0;i<n;i++){
          cin>>B[i];
      }
    int sum=0;
    int sum1=0;
    for(int i=0;i<n;i++){
        sum=sum+B[i];
        if(B[i]%2==0){
            B[i]=0;
            sum1=sum1+B[i];
        }
        else{
            B[i]=1;
            sum1=sum1+B[i];
        }
    }
    cout<<"sum"<<sum<<endl;
    for(int i=0;i<n;i++){
    	cout<<B[i]<<" ";
	}
	cout<<endl;
	cout<<"sum1"<<sum1;
    int flag=0;
    int count=0;
    int i=0;
    if(sum%2==0){
        while((sum1) != 0){
        	cout<<"i is"<<i<<endl;
            if(B[i]==1 && i>0){
                B[i]=0;
                count++;
                if(B[i-1]==1){
                    B[i-1]=0;
                    count++;
                }
                else if(i<n-1){
                   if(B[i+1]==1){
                   	B[i+1]=0;
				   }
				   else{
				   	B[i+1]=1;
				   }
				   count++;
                }
               
                
            }
           else if(B[i]==1 && i==0 ){
                B[i]=0;
               count++;
                if(B[i+1]==1){
                    count++;
                    B[i+1]=0;
                }
            }
            else if(B[i]==1){
                B[i+1]=0;
                count++;
            }
             sum1=0;
	        cout<<"reached";
	        for(int j=0;j<n;i++){
	            sum1=sum1+B[j];
	            cout<<B[j]<<" ";
	        }
	        cout<<endl;
	         i++;
	        i=i%n;
       
        }
       
    }
    
    else{
        cout<<"NO";
        flag=1;
        
    }
    if(flag==0){
        cout<<count;
    }

}
