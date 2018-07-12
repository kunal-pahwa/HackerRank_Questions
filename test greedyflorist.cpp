#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int A[n];
	int i;
	int sum=0;
	for(i=0;i<n;i++){
		cin>>A[i];
		sum=sum+A[i];
	}
	sort(A,A+n);
	int left=n%k;
	if(k>=n){
		cout<<sum;
	}
	else{
		int remaining=n-left;
		int x=k-1;
		int price=0;
		for(i=0;i<remaining;i++){
			price=price+((x+1)*A[i]);
			x--;
			if(x<0){
				x=k-1;
			}
			
		}
	//	cout<<price<<" ";
		x=0;
		for(i=n-1;i>=remaining;i--){
			price=price+((x+1)*A[i]);
			x++;
		}
		cout<<price;
	}
}
