#include <bits/stdc++.h> 
using namespace std; 
// doi cho hai phan tu
void Solution(int A[], int n) { 
    //B1: Sap xep mang 
    //sort(A, A+n);   
    // doi cho cac phan tu chan 
    for (int i=0; i<n-1; i += 2) 
        swap(A[i], A[i+1]); 
    //dua ra ket qua
    for (int i=0; i<n; i++) 
       cout << A[i] << " "; 
	cout<<endl;        
}   
// Test Solution 
int main() { 
    int *A, n , T; cin>>T;
    while(T--){
    	cin>>n; A = new int[n];
    	for(int i=0; i<n; i++) cin>>A[i];
    	Solution(A, n);delete A;
	}
} 
