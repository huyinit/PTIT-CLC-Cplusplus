//BAI 10
#include <bits/stdc++.h> 
#define MAX 1001
using namespace std;   
// In ra ma tran ket qua
void Result(bool *A[MAX], int m, int n) { 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            cout << A[i][j]<<" "; 
        } 
        cout <<endl; 
    } 
    //cout<<endl;
}   
void Init(bool *A[MAX], int m, int n){	
	for(int i=0; i<m; i++) 
		A[i] = new bool[n];
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            cin>>A[i][j]; 
        }         
    } 	
}
void Solution1 (bool *A[MAX], int m, int n) { 
    bool row[MAX]; 
    bool col[MAX];   
    int i, j;       
    // thiet lap tat ca cac gia tri cua hang la 0
    for (i = 0; i < m; i++) 
    	row[i] = 0;       
    // thiet lap tat ca cac gia tri cua cot la 0
    for (i = 0; i < n; i++) 
    	col[i] = 0;   
    // luu hang va cot la 1 trong row[] va col[] theo thu tu 
    for (i = 0; i < m; i++) { 
        for (j = 0; j < n; j++) { 
            if (A[i][j] == 1) { 
                row[i] = 1; col[j] = 1; 
            } 
        } 
    }   
    // Dich chuyen ma tran theo row[] and col[] 
    for (i = 0; i < m; i++) { 
        for (j = 0; j < n; j++)  { 
            if ( row[i] == 1 || col[j] == 1 ) { 
                A[i][j] = 1; 
            } 
        } 
    } 
    Result(A, m, n);
} 
// Test solution 
int main() { 
    bool *A[MAX]; int m, n, T; cin>>T;
    while(T--){
    	cin>>m>>n; Init(A, m, n);
		Solution1(A,m,n);delete *A;		
	}
}
 
