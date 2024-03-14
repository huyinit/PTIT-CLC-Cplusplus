// do dai day con tang dai nhat
#include <bits/stdc++.h> 
using namespace std;  
/* To make use of recursive calls, this function must return 
   two things: 
   1) Length of LIS ending with element arr[n-1]. We use 
      max_ending_here for this purpose 
   2) Overall maximum as the LIS may end with an element 
      before arr[n-1] max_ref is used this purpose. 
   The value of LIS of full array of size n is stored in 
   *max_ref which is our final result */
//Solution 1: Submit khong thanh cong
int LIS( int A[], int n, int *max_ref) { 
    //neu day co 1 phan tu
    if (n == 1) 
        return 1;   
    // max_ending_here: la do dai day con dai nhat den A[n-1] 
    int res, max_ending_here = 1;  
  
    /* Recursively get all LIS ending with A[0], A[1] ... 
       A[n-2]. If   A[i-1] is smaller than A[n-1], and 
       max ending with A[n-1] needs to be updated, then 
       update it */
    for (int i = 1; i < n; i++) { 
        res = LIS(A, i, max_ref); 
        if (A[i-1] < A[n-1] && res + 1 > max_ending_here) 
            max_ending_here = res + 1; 
    }   
    // Compare max_ending_here with the overall max. And 
    // update the overall max if needed 
    if (*max_ref < max_ending_here) 
       *max_ref = max_ending_here;   
    // Return length of LIS ending with A[n-1] 
    return max_ending_here; 
} 
// The wrapper function for LIS() 
int Solution1(int A[], int n) { 
    // The max variable holds the result 
    int max = 1; 
  
    // The function LIS() stores its result in max 
    LIS( A, n, &max ); 
  
    // returns max 
    return max; 
} 

//Solution 2: Submit OK
int Solution2( int A[], int n )  {  
    int lis[n]; lis[0] = 1;      
    // tinh toan gia tri LIS tu duoi len
    for (int i = 1; i < n; i++ ) { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( A[i] > A[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    }   
    // tra lai gia tri lon nhat trong lis[] 
    return *max_element(lis, lis+n); 
}    
  
//Test solution
int main() { 
	int *A, n, T; cin>>T;
	while(T--){
		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		cout<<Solution2(A,n)<<endl;
		delete A;
	}
}
