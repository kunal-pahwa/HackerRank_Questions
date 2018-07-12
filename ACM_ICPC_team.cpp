#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int m;
	cin>>n>>m;
	char s[n][m];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	int A[n];
	for(i=0;i<n;i++){
		int ans=0;
        for(j=m-1;j>=0;j--){
            int x=s[i][j]-'0';
            
            ans=ans+((pow(2,j))*x);
            
        }
        A[i]=ans;
        
	}
	int B[2*n];
	int x=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
		{
			B[x]=A[i]|A[j];
			x++;
		}
	}
	for(i=0;i<x;i++){
		B[i]=__builtin_popcount (B[i]);
	}
	int max=0;
	for(i=0;i<x;i++){
		if(B[i]>max){
			max=B[i];
		}
	}
	cout<<max<<endl;
	int count=0;
	for(i=0;i<n;i++){
		if(max==B[i]){
			count++;
		}
	}
	cout<<count;
}
