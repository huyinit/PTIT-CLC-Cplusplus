#include <bits/stdc++.h> 
using namespace std; 
const int MAX = 101;
void Solution(int A[], int n){
	int Hash[MAX]; 
	memset(Hash, 0, MAX);
	for(int i=0; i<n; i++) {
		Hash[A[i]]++;
	}
	for(int i=0;i<MAX;i++){
		if(Hash[A[i]]==1) {
			cout<<A[i]<<endl; break;
		}
	}
}
//1 1 2 2 3
void Solution1(int A[], int n){
	Sort(A, A+n);
	for(int i=0; i<n; i+=2){
		if(A[i]!=A[i+1]) {
			cout<<A[i]<<endl; break;
		}
	}	
}
//test solution
int main(void){
	int A[MAX], T, n; cin>>T;
	while(T--){
		cin>>n;
		for(int i=0; i<n; i++) cin>>A[i];
		Solution(A,n);
	}
}
//17
//2 2 3 3 4 4 27 27 32 32 36 36 41 41 42 42 45
