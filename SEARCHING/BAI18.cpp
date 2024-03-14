// Tim phan tu lon hon cac phan tu ben trai
// nho hon cac phan tu ben phai
#include <bits/stdc++.h> 
using namespace std; 
int Solution(int A[], int n) { 
    // leftMax[i] stores maximum of A[0..i-1] 
    int leftMax[n]; //luu max A[0..i-1]
    leftMax[0] = INT_MIN;       
    for (int i = 1; i < n; i++) //dien vao leftmax
        leftMax[i] = max(leftMax[i-1], A[i-1]);       
    int rightMin = INT_MAX;       
    for (int i=n-1; i>=0; i--){ 
        // kiem tra neu phan tu thoa man 
        if (leftMax[i] < A[i] && rightMin > A[i]) 
		    return i;   
        rightMin = min(rightMin, A[i]); 
    } 
    return -1; 
} 
//Test Solution  
int main() { 
	int T, N, *A; cin>>T;
	while(T--){
		cin>>N; A = new int[N];
		for(int i=0; i<N; i++) cin>>A[i];
		int k = Solution(A,N);
		if(k!=-1) cout<<A[k]<<endl;
		else cout<<-1<<endl;		
		delete A;		
	}
} 
