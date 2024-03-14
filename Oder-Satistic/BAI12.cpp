// Tim so nguyen khong am nho nhat khong xuat hien trong mang
#include <bits/stdc++.h> 
using namespace std;   
int Solution(int A[], int n) {   
    // Hash[]: danh dau cac phan tu 0, 1, 2, .., n
    bool Hash[n + 1] = { false };   
    // danh sau su xuat hien cua cac so nguyen duong
    for (int i = 0; i < n; i++) { 
        if (A[i] > 0 && A[i] <= n) 
            Hash[A[i]] = true; 
    }   
    // tim phan tu dau tien khong xuat hien trong Hash[]    
    for (int i = 1; i <= n; i++) 
        if (!Hash[i]) 
            return i;   
    // neu cac so 1, 2, .., n deu xuat hien
    return n + 1; 
}   
// Test solution 
int main() { 
  	int *A, n, T; cin>>T;
  	while(T--){
  		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];	
		cout<<Solution(A,n)<<endl; delete A;
	}
} 
  
