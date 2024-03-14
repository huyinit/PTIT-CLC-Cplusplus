//tim phan tu thieu trong mang
#include <bits/stdc++.h> 
using namespace std; 
int Solution(int A[], int n) {
	//B1: tim tong cua n so dau tien
    int S =( (n ) * (n +1 ) )/ 2; 
    //B2: tim so con khuyet
    for (int i = 0; i < n-1; i++) 
        S -= A[i]; 
    //B3: tra lai ket qua
    return S; 
} 
//test solution
int main(void) { 
    int *A, n, T; cin>>T;
	while(T--) {
		cin>>n; A = new int[n];
		for(int i=0; i<n-1; i++) cin>>A[i];
		cout<<Solution(A,n)<<endl;
		delete A;
	}
} 
