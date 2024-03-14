// Sap dat : nho nhat, lon nhat, ....
#include <bits/stdc++.h> 
using namespace std;   
void Solution(int A[], int n) {    
    //B1: sap xep mang theo thu tu tang dan
    sort(A, A + n);   
    //B2: sap dat lai cac phan tu vao temp[]
    int temp[n], k = 0;   
    // su dung hai con tro dau va cuoi
    for (int i = 0, j = n-1; i <= n / 2 || j > n / 2; i++, j--) { 
        temp[k] = A[i]; k++; 
        temp[k] = A[j]; k++; 
    }   
    //B3: dua ra ket qua
    for (int i = 0; i < n; i++) 
        cout<<temp[i]<<" "; 
	cout<<endl; 
}   
// Test Solution
int main() { 
    int *A, n, T; cin>>T;
    while(T--){
    	cin>>n; A = new int[n];
    	for(int i=0; i<n; i++) cin>>A[i];
    	Solution(A,n);
	}
}   
