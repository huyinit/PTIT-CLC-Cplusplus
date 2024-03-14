// Tim phan tu nho nhat thu k 
#include<bits/stdc++.h> 
using namespace std;   

int Solution(int A[], int n, int k) { 
    // Sap xep theo thu tu tang dan 
    sort(A, A+n);   
    // tra lai so nho nhat thu k 
    return A[k-1]; 
} 
  
// Test solution 
int main() { 
    int *A, n,k, T; cin>>T;
    while(T--){
    	cin>>n; A = new int[n];
    	for(int i=0; i<n; i++) cin>>A[i];
    	cin>>k;
    	cout<<Solution(A,n,k)<<endl;
	}
} 
