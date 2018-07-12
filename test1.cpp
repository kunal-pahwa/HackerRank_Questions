#include<iostream>
using namespace std;
//int subset(int arr)
int main(){
	int A[5];
	for(int i=0;i<5;i++){
		cin>>A[i];
	}	
	int ans = INT_MIN;     // Initialize result
 
    // Pick starting points of subarrays
    for (int i=0; i<5; i++)
    {
        int curr_xor = 0; // to store xor of current subarray
 
        // Pick ending points of subarrays starting with i
        for (int j=i; j<5; j++)
        {
            curr_xor = curr_xor ^ A[j];
            ans = max(ans, curr_xor);
        }
    }
	cout<<ans;
}
