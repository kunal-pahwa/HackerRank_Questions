#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n][n];
	int i;
	int j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>A[i][j];		
		}
	}
	int size=n*n;
	int result[size];
	int row=0;
	int column=0;
	i=0;
	j=0;
	int checks=0;
	int push=0;
	while(checks<n*n){
		if(i==0){
			result[push]=A[i][j];
			push++;
			check++;
			j++;
			if(j>=n){
				i++;
				j=n-1;
			}
		}
		if()
	}
}
