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
	int sorted=0;
	int min=A[sorted];
	for(int i=0;i<n;i++){
		min=A[sorted];
		int k=i;
		for(int j=sorted;j<n;j++){
			if(A[j]<=min){
				min=A[j];
				k=j;
			}
		}
		int temp=A[sorted];
		A[sorted]=A[k];
		A[k]=temp;
		sorted++;
	}
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}
