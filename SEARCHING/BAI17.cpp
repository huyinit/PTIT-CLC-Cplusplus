//dua ra so nho nhat thu k
#include <bits/stdc++.h> 
using namespace std;  
int Solution(int arr[], int n, int k) { 
    // Sort the given array 
    sort(arr, arr+n);   
    // Return k'th element in the sorted array 
    return arr[k-1]; 
} 
int main() { 
    int T, n, k, *A; cin>>T;
    while(T--){
    	cin>>n; A = new int[n];
    	for(int i=0; i<n;i++) cin>>A[i];
    	cin>>k;
    	cout<<Solution(A, n, k)<<endl;
    	delete A;
	}
} 
