#include<iostream>
#include<vector>
#include<set>
using namespace std;
void print(vector<int> a){
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void rec(vector<int> a, vector<int> b, int i, set<vector<int> > &s){
	if(i==a.size()){
		s.insert(b);
		return;
	}
	s.insert(b);
	b.push_back(a[i]);
	rec(a, b, i+1, s);
	b.pop_back();
	rec(a, b, i+1, s);
}
void print(set<vector<int> > s){
	set<vector<int> > :: iterator it = s.begin();
	while(it!=s.end()){
		vector<int> cur = *it;
		for(int i=0;i<cur.size();i++){
			cout<<cur[i]<<" ";
		}
		cout<<endl;
		it++;
	}
	
}
int main(){
	vector<int> a;
	for(int i=0;i<5;i++){
		a.push_back(i);
	}
	vector<int> b;
	set<vector<int> > s;
	rec(a, b, 0, s);
	print(s);
}
