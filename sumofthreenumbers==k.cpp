#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    sort(A,A+n);
	    int high=n-1;
	    int low=0;
	    int flag=0;
	    for(int i=0;i<n;i++){
	        if(i==0){
	            low=i+1;
	        }
	        else{
	            low=0;
	            high=n-1;
	        }
	        while((A[low]+A[high]+A[i]!=k) && i!=low && i!=high){
	            if(A[low]+A[high]+A[i]>k && i!=low && i!=high){
	                high--;
	            }
	            if(A[low]+A[high]+A[i]<k && i!=low && i!=high){
	                low++;
	            }
	            if(A[low]+A[high]+A[i]==k && i!=low && i!=high){
	                flag=1;
	                break;
	            }
	            
	        }
	        if(flag==1){
	            break;
	        }
	    }
	    if(flag==1){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
