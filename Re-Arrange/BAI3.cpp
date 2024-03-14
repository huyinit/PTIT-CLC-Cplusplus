// tim so phep doi cho it nhat de 
// cac so nho hon hoac bang k gan nhau
#include <bits/stdc++.h>
using namespace std; 
int minSwap(int *A, int n, int k) { 
    //B1: tim so phan tu nho hon hoac bang k  
    int count = 0; 
    for (int i = 0; i < n; ++i) 
        if (A[i] <= k) ++count;       
    //B2: tim so phan tu lon hon k cua count phan tu dau tien    
    int Greater = 0; 
    for (int i = 0; i < count; ++i) 
        if (A[i] > k) 
            ++Greater;       
    //B3: tim so phep doi cho it nhat cua count phan tu tiep theo
    int ans = Greater; //thiet lap ans la Greater
    for (int i = 0, j = count; j < n; ++i, ++j) {          
        if (A[i] > k) //giam cac so lon hon k
            --Greater;                   
        if (A[j] > k) //tang cac so lon hon k cua phan tu tiep theo
            ++Greater; 
        ans = min(ans, Greater); //cap nhat so phep doi cho
    } 
    return ans; 
}   
// Test Solution
int main() { 
    int *A, n,k, T; cin>>T;
	while(T--)  {
		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		cin>>k;
		cout<<minSwap(A,n,k)<<endl;
		delete A;
	}
} 
