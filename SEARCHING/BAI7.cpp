// tim so lan xuat hien phan tu cua mang da sap
#include <bits/stdc++.h> 
using namespace std; 

void Solution(int A[], int n, int k) { 
    sort(A, A + n, greater<int>()); //sap giam dan      
    for (int i = 0; i < k; i++) //dua ra k phan tu dau tien
        cout << A[i] << " "; 
    cout<<endl;
} 
//Test Solution
int main() { 
  	int *A, n, k, T; cin>>T;
  	while(T--){
  		cin>>n>>k; A = new int[n];
  		for(int i=0; i<n; i++) cin>>A[i];
  		Solution(A,n,k); delete A;
	}
} 
