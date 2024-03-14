// tim so lan xuat hien x trong mang duoc sap
#include <bits/stdc++.h> 
using namespace std; 
int Search(int A[], int l, int r, int x) { 
    if (r < l) return -1;   
    int mid = l + (r - l) / 2;   
    if (A[mid] == x) 
        return mid; 
    if (A[mid] > x) 
        return Search(A, l, mid - 1, x); 
    return Search(A, mid + 1, r, x); 
} 
int Solution(int A[], int n, int x) { 
    int index = Search(A, 0, n - 1, x); 
    if (index == -1) 
        return -1;   
    int count = 1; //chi it da co mot so
    int left = index - 1; //dem cac so la x phia ben trai
    while (left >= 0 && A[left] == x) //lap neu dieu nay dung
        count++, left--;       
    int right = index + 1; //dem cac so la x o ben phai
    while (right < n && A[right] == x) 
        count++, right++;   
    return count; 
} 
//Test Solution
int main() { 
  	int *A, n, x, T; cin>>T;
  	while(T--){
  		cin>>n>>x; A = new int[n];
  		for(int i=0; i<n; i++) cin>>A[i];
  		cout<<Solution(A,n,x)<<endl; delete A;
	}
}
