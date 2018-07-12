#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int main(){
	string a,b;
	cin>>a;
	cin>>b;
	int n1=a.length();
	int n2=b.length();
	int count=0;
	int j=0;
//	cout<<n1<<n2;
	int window=n1;
	map<char,int> m;
	map<char,int> copy;
	for(int i=0;i<n2;i++){
		m[b[i]]++;
	}
	copy.insert(m.begin(),m.end());
//	cout<<m['a'];
	int flag=1;
	int intial=0;
//	ADOBECODEBANC
	int start=0;
	int end=0;
	for(int i=0;i<n1;i++){
		if(copy[a[i]]!=0){
			copy[a[i]]--;
			count++;
			
			if(flag==1){
			intial=i;
			flag=0;
			}
		}
		
		if(count==n2){
			flag=1;
			copy.clear();
			copy.insert(m.begin(),m.end());
//			cout<<intial<<" i"<<i<<endl;
			if(window>abs(i-intial)){
				window=abs(intial-i);
				start=intial;
				end=i;
			
			}
			count=0;
		}
	}
	for(int i=start;i<=end;i++){
		cout<<a[i];
	}
	cout<<endl;
}
