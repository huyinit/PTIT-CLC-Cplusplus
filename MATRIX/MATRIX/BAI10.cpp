//BAI 10: thay the hang cot bang so 1
#include <bits/stdc++.h> 
#define MAX 1001
using namespace std;   
// In ra ma tran ket qua
void Result(bool A[MAX][MAX], int m, int n) { 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
            cout << A[i][j]<<" "; 
        } 
        cout <<endl; 
    } 
    //cout<<endl;
}   
void Solution1 (bool A[MAX][MAX], int m, int n) { 
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
void Solution(bool A[MAX][MAX], int m, int n) { 
    bool row_flag = false; //co trang thai cua hang
    bool col_flag = false; //co trang thai cua cot  
    // cap nhat hang va cot dau tien neu co gia tri 1
    for (int i = 0; i < m; i++) { //duyet theo so hang
        for (int j = 0; j < n; j++) { //duyet theo so cot
            if (i == 0 && A[i][j] == 1) //neu la hang dau tien 
                row_flag = true;   
            if (j == 0 && A[i][j] == 1) //neu la cot dau tien
                col_flag = true;   
            if (A[i][j] == 1) { //neu  
                A[0][j] = 1; 
                A[i][0] = 1; 
            } 
        } 
    }   
    // Dien ma tran su dung hang dau va cot dau cua ma tran
    for (int i = 1; i < m; i++) { 
        for (int j = 1; j < n; j++) {   
            if (A[0][j] == 1 || A[i][0] == 1) { 
                A[i][j] = 1; 
            } 
        } 
    }   
    // Dien hang dau tien neu co gia tri 1
    if (row_flag == true) { 
        for (int i = 0; i < n; i++) { 
            A[0][i] = 1; 
        } 
    }   
    // Dien cot dau tien neu co gia tri 1
    if (col_flag == true) { 
        for (int i = 0; i < m; i++) { 
            A[i][0] = 1; 
        } 
    } 
    Result(A, m, n);
} 
// Test solution 
int main() { 
    bool A[MAX][MAX]; int m, n, T; cin>>T;
    while(T--){
    	cin>>m>>n;
    	for(int i=0; i<m; i++){
    		for(int j=0; j<n; j++) 
    			cin>>A[i][j];
		}
		Solution1(A,m,n);		
	}
}
 
