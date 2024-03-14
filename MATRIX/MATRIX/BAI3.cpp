#include <bits/stdc++.h> 
using namespace std; 
#define MAX 101  
//khoi tao mot test
void Init(int A[][MAX], int m, int n) {   	
   	for(int i=0; i<m; i++){ //duyet theo hang
   		for(int j=0; j<n; j++) //duyet theo cot
   			cin>>A[i][j];//nhap du lieu cho A[i][j]
	}	
}
//giai phap khong de qui
void Solution(int A[MAX][MAX], int m, int n ) { 
    int i, k = 0, l = 0;     
    while (k < m && l < n) { 
        //1. In hang thu dau tien tu trai qua phai
        for (i = l; i < n; ++i) { 
            cout << A[k][i] << " "; 
        } 
        k++;  //ghi nhan hang k o buoc sau
        //2. In cot cuoi cung tu tren xuong duoi          
        for (i = k; i < m; ++i) { 
            cout << A[i][n - 1] << " "; 
        } 
        n--; //thu nho so cot o buoc sau  
        //3. In hang duoi cung tu phai qua trai
        if (k < m) { //neu k van chua la hang cuoi cung
            for (i = n - 1; i >= l; --i) { 
                cout << A[m - 1][i] << " "; 
            }             
        }   
        m--; //thu nho so hang o buoc sau
        //4.In cot dau tien tu duoi len tren                   
        if (l < n) { 
            for (i = m - 1; i >= k; --i) { 
                cout << A[i][l] << " "; 
            }             
        } 
        l++; //ghi nhan cot tiep theo o buoc sau
    } 
    cout<<endl;
} 
//Giai phap de qui
void Solution1(int A[MAX][MAX], int i, int j, int m, int n) { 
    // neu i, j vuot qua kich co ma tran
    if (i >= m or j >= n) {
    	cout<<endl; return;
	} 
    // in hang thu nhat
    for (int p = i; p < n; p++) 
        cout << A[i][p] << " ";   
    // in cot cuoi cung
    for (int p = i + 1; p < m; p++) 
        cout << A[p][n - 1] << " ";   
    // in hang cuoi cung neu hang dau va hang cuoi khac nhau
    if ((m - 1) != i) 
        for (int p = n - 2; p >= j; p--) 
            cout << A[m - 1][p] << " ";   
    // in cot dau tien neu cot dau va cot cuoi khac nhau
    if ((n - 1) != j) 
        for (int p = m - 2; p > i; p--) 
            cout << A[p][j] << " "; 
  	//in ma tran voi kich thuoc con lai
    Solution1(A, i + 1, j + 1, m - 1, n - 1); 
} 
//test solution
int main() { 
    int A[MAX][MAX], m, n, T;cin>>T;
    while(T--){ 
    	cin>>m>>n; //nhap m, n
    	Init(A, m, n);//nhap mot test
		Solution(A, m, n);//thuc hien giai phap
	}
}
