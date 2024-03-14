// tim max cac phan tu cua mang
#include <bits/stdc++.h> 
using namespace std;   
int Max(int A[], int n) { 
    return *max_element(A, A+n); 
} 
int Min(int A[], int n) { 
    return *min_element(A, A+n); 
} 
// Test solution 
int main() { 
    int *A, n,k, T; cin>>T;
    while(T--){
    	cin>>n; A = new int[n];
    	for(int i=0; i<n; i++) cin>>A[i];    	
    	cout<<Max(A,n)<<" "<<Min(A,n)<<endl;
    	delete A;
	}
} 
