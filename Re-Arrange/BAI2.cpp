// Sap dat lai cac phan tu cua mang cho so 0 ve cuoi cung
#include <bits/stdc++.h>   
using namespace std;   
// dua ra mang ket qua
void Result(int A[], int n) { 
    for (int i = 0; i < n; i++) 
        cout << A[i] << " "; 
    cout<<endl;
}  
// dua so 0 ve cuoi mang
void Solution(int A[], int n) { 
    //B1: Chuyen so khac 0 len dau mang
    int count = 0; 
    for (int i = 0; i < n; i++) {	
        if (A[i] != 0)               
            A[count++] = A[i]; 
	}
	//B2: dien not cac so 0 vao cuoi		  
    while (count < n) 
        A[count++] = 0; 
    //B3: dua ra ket qua
    Result(A, n);    
}  
// Test Solution
int main() { 
    int *A, n, T; cin>>T;
    while(T--){
    	cin>>n; A = new int[n];
    	for(int i=0; i<n; i++) cin>>A[i];
    	Solution(A,n); delete A;
	}
} 
