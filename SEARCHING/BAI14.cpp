// tim phan tu lap lai dau tien trong mang
#include <bits/stdc++.h> 
#define MAX 1000001
using namespace std; 
int Solution(int A[], int n)  {  
	int *Hash =new int[MAX];
	//memset(Hash,0, MAX);
	for(int i=0; i<MAX; i++) Hash[i]=0;
	for(int i=1; i<=n; i++) Hash[A[i]]++;
	for(int i=1; i<=n; i++){
		if( Hash[A[i]] >1) {		
			return i;
		}			
	}	
	return -1;
}    
// Test Solution
int main()  {  
	int T, *A, n, x; cin>>T;
	while(T--){
		cin>>n; A = new int[n+1];
		for(int i=1; i<=n; i++) cin>>A[i];
		cout<<Solution(A,n)<<endl;
		delete A;
	}
} 
