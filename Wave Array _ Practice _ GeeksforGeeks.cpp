#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    sort(A,A+n);
	    for(int i=0;i<n-1;i=i+2){
	        int temp;
	        temp=A[i];
	        A[i]=A[i+1];
	        A[i+1]=temp;
	    }
	    for(int i=0;i<n;i++){
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
