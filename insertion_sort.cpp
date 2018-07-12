#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int k,l,m;
	int hole=0;
	int value;
	for(int i=1;i<n;i++){
		hole=i;
		value=A[i];
//		cout<<"asdhnasfdsssf"<<endl;
		while(value<A[hole-1] && hole>0){
//			cout<<hole<<" asdas";
			A[hole]=A[hole-1];
			hole--;
		}
		A[hole]=value;
	}
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}
