#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int A[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int key;
	for(i=1;i<n;i++)
	{
		key=A[i];
		int j=i-1;
		while(j>=0 && A[j]>key){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
	for(i=0;i<n;i++){
		cout<<A[i]<<"   ";
	}
}
