#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	//cout<<"sjdkl";
	while(t--){
		int n;
		cin>>n;
		int i;
		int A[n];
		for(i=0;i<n;i++){
			cin>>A[i];
		}
		int sum=0;
		int front=0;
		int count=0;
		int jumps=0;
		while(front!=n-1){
			for(i=front+1;(A[front]<=A[i]);i++){
				count++;
				jumps=jumps+A[i];
			}
			sum=sum+((A[front]-A[i])*count)-jumps;
			front=i;
		}
		cout<<sum<<endl;
	}
}
