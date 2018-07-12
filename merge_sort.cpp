#include<iostream>
#include<algorithm>
using namespace std;
int i=0;
int recursion(int* A,int n){
//	cout<<i++<<" ";
	int left=n;
	int right=n;
	int mid=(left+right)/2;

		
		int i=0;
		int j=0;
		int k=0;
		if(n<1){
			return ;
		}
		while(i<left && j<right){
			if(A[i]<=A[right]){
				A[k]=A[i];
				i++;
			}
			else{
				A[k]=A[j];
				j++;
			}
			k++;
		}
		while(i<left){
			A[k]=A[i];
			i++;
			k++;
		}
		while(j<right){
			A[k]=A[j];
			j++;
			k++;
		}
		
		
		recursion(A,n/2);
}
	
	

int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x=recursion(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
