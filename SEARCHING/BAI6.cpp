// tim cap phan tu co tong gan 0 nhat
#include <bits/stdc++.h> 
using namespace std; 
bool compare(int x, int y) { //so sanh hai tri tuyet doi
    return abs(x) < abs(y); 
}   
void Solution(int A[], int n) { 
    sort(A, A + n, compare); //sap xep theo tri tuyet doi
    int min = INT_MAX, x, y; 
    for (int i = 1; i < n; i++) { //duyet tu i=1..n-1          
        if (abs(A[i - 1] + A[i]) <= min) { //so sanh tong hai phan tu lien tiep  
            min = abs(A[i - 1] + A[i]); 
            x = i - 1; y = i; 
        } 
    } 
    cout << A[x]+ A[y]<<endl; 
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
