// tim so phep tang it nhat de tong cac hang cac cot bang nhau
#include <bits/stdc++.h> 
#define MAX 101
using namespace std;   
int Solution(int A[MAX][MAX], int n) { 
    //B1: tao mang sumRow[] and sumCol[] thiet lap 0    
    int sumRow[n], sumCol[n]; 
    memset(sumRow, 0, sizeof(sumRow)); 
    memset(sumCol, 0, sizeof(sumCol));   
    // B2: tinh tong cac hang va cac cot 
    for (int i = 0; i < n; ++i) {	
        for (int j = 0; j < n; ++j) { 
            sumRow[i] += A[i][j]; 
            sumCol[j] += A[i][j]; 
        } 
  	}
    // B3: tim max cua cac hang va cac cot
    int maxSum = 0; 
    for (int i = 0; i < n; ++i) { 
        maxSum = max(maxSum, sumRow[i]); 
        maxSum = max(maxSum, sumCol[i]); 
    } 
	//B4: thuc hien dem so buoc tang  
    int count = 0; 
    for (int i = 0, j = 0; i < n && j < n;) {   
        // tim phep tang it nhat trong cac hang va cac cot
        int diff = min(maxSum - sumRow[i],maxSum - sumCol[j]);   
        // cong them voi phan tu hien tai
        A[i][j] += diff; 
        sumRow[i] += diff; 
        sumCol[j] += diff;   
        // cong them phep bien doi 
        count += diff;   
        // neu hang thu i thoa man tang gia tritai vong lap tiep theo 
        if (sumRow[i] == maxSum) 
            ++i;   
        // neu cot thu i thoa man tang gia tri tai vong lap tiep theo
        if (sumCol[j] == maxSum) 
            ++j; 
    } 
    return count; 
}   
// Dua ra ma tran A 
void Result(int A[][MAX], int n) { 
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < n; ++j) 
            cout << A[i][j] << " "; 
        cout <<endl; 
    } 
    cout<<endl;
}   
// Test solution 
int main() { 
    int A[MAX][MAX], n, T; cin>>T;
    while(T--){
    	cin>>n;
    	for(int i=0; i<n; i++){
    		for(int j=0; j<n; j++) 
    			cin>>A[i][j];
		}
		cout<<Solution(A,n)<<endl;		
	}
}
