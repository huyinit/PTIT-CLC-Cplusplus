// tim so lan xuat hien x trong mang duoc sap
#include <bits/stdc++.h> 
#define MAX  1000001
using namespace std; 
void Solution(int A[], int n) {
	int *Hash = new int[MAX];
	memset(Hash, 0, MAX);
	//for(int i=0; i<MAX; i++) Hash[i]=0;
	for(int i=0; i<n; i++) 
		Hash[A[i]]++;
	int Miss=0, Rep=0;	
	for(int i=1; i<=n; i++){
		if(Hash[i]==2) Rep = i;
		if(Hash[i]==0) Miss =i;
	}
	cout<<Rep<<" "<<Miss<<endl;
	delete Hash;
}

//Test Solution
int main(void) { 
  	int *A, n, T; cin>>T;
  	while(T--){
  		cin>>n; A = new int[n];
  		for(int i=0; i<n; i++) cin>>A[i];
  		Solution(A,n); delete A;
	}
}
