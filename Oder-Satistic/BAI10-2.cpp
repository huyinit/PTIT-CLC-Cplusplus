// In ra day con tang dai nhat: LIS   
#include <bits/stdc++.h> 
using namespace std;   
// In ra day con tang dai nhat
void printLIS(int LIS[], int n) { 
    for (int i=0; i<n; i++) 
        cout << A[i] << " "; 
    cout << endl; 
} 
// xay dung LIS tu A[]
void constructPrintLIS(int A[], int n) { 
    int L[n]; 
	L[0]=A[0];//L[0] la A[0]  
    // duyet i bat dau tu 1
    for (int i = 1; i < n; i++)   { 
        // voi moi j nho hon i
        L[i]=A[i];
        for (int j = 0; j < i; j++) { 
            /* L[i] = {Max(L[j])} + A[i] 
            where j < i and A[j] < A[i] */
            if ((A[i] > A[j]) && (i<j+1) 
                L[i] = L[j]; 
        }                    
    } 
    vector<int> max = L[0]; 
  
    // LIS will be max of all increasing sub- 
    // sequences of A 
    for (vector<int> x : L) 
        if (x.size() > max.size()) 
            max = x; 
  
    // max will contain LIS 
    printLIS(max); 
} 
  
// Driver function 
int main() 
{ 
    int A[] = { 3, 2, 6, 4, 5, 1 }; 
    int n = sizeof(A) / sizeof(A[0]); 
  
    // construct and print LIS of A 
    constructPrintLIS(A, n); 
  
    return 0; 
} 
