// Bai 9: thay the : A[0] = A[0]*A[1]; A[n-1]=A[n-1]*A[n-2]; A[i]=A[i-1]*A[i+1]
#include <bits/stdc++.h> 
using namespace std;   
void Solution(int A[], int n) { 
    //khong co gi phai lam neu n<=1
    if (n <= 1) {
    	cout<<A[0]; return;
	}     
   // luu phan tu dau tien la A[0] vao prev
    int prev = A[0]; 
    A[0] = A[0] * A[1]; //thiet lap gia tri cho A[0]  
    // cap nhat gia tri A[1], .., A[n-2] 
    for (int i=1; i<n-1; i++) {         
        int curr = A[i]; // gia tri phan tu hien tai          
        A[i] = prev * A[i+1]; // thay bang tich phan tu truoc sau          
        prev = curr; //luu la phan tu truoc
    }   
    // cap nhat phan tu cuoi cung
    A[n-1] = prev * A[n-1]; 
    for (int i=0; i<n; i++) 
      cout << A[i] << " "; 
	cout<<endl;    
} 
// Test Solution
int main() { 
    int *A, n, T; cin>>T;
    while(T--){
    	cin>>n; A = new int[n];
    	for(int i=0; i<n; i++) cin>>A[i];
    	Solution(A,n);delete A;
	}    
} 
