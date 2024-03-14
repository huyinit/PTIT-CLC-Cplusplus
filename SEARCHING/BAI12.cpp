// tim cap co  hieu la X
#include <bits/stdc++.h> 
#define MAX 100001
using namespace std; 
int Solution(int A[], int n, int x)  {  
	int *Hash =new int[MAX];
	//memset(Hash,0, MAX);
	for(int i=0; i<MAX; i++) Hash[i]=0;
	for(int i=0; i<n; i++) Hash[A[i]]++;
	for(int i=0; i<n; i++){
		if( Hash[A[i]] && Hash[ abs(x-A[i])]) {		
			return 1;
		}			
	}	
	return -1;
}    
// Test Solution
int main()  {  
	int T, *A, n, x; cin>>T;
	while(T--){
		cin>>n>>x; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		cout<<Solution(A,n,x)<<endl;
		delete A;
	}
} 
