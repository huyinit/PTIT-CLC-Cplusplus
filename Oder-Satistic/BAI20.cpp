#include <bits/stdc++.h> 
using namespace std; 
void Solution(int A[], int len) { 
    set<int> s; 
    set<int>::iterator it; //itlow,itup;
    int countSmaller[len]; 
    for (int i = len - 1; i >= 0; i--) { 
        s.insert(A[i]); 
        it = s.lower_bound(A[i]); 
        countSmaller[i] = distance(s.begin(), it); 
    }   
    for (int i = 0; i < len; i++) 
        cout << countSmaller[i] << " "; 
    cout<<endl;
}   
// Test Solution 
int main() { 
	int *A, n, T; cin>>T;
	while(T--){
		cin >>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		Solution(A,n);
	}
} 
