//BAI 18: In theo hinh soan oc nguoc
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
    //B1: tao mang soan oc 1 chieu B[]
    int B[m*n], p=0; //tao mang B[] gom n*m phan tu va chi so p=0
	int i, k = 0, l = 0; //khoi tao k, l
    while (k < m && l < n) { 
        //1. In hang thu dau tien tu trai qua phai
        for (i = l; i < n; ++i) { 
            //cout << A[k][i] << " "; 
            B[p] = A[k][i]; p++;
        } 
        k++;  //ghi nhan hang k o buoc sau
        //2. In cot cuoi cung tu tren xuong duoi          
        for (i = k; i < m; ++i) { 
            //cout << A[i][n - 1] << " "; 
            B[p] = A[i][n-1]; p++;
        } 
        n--; //thu nho so cot o buoc sau  
        //3. In hang duoi cung tu phai qua trai
        if (k < m) { //neu k van chua la hang cuoi cung
            for (i = n - 1; i >= l; --i) { 
                //cout << A[m - 1][i] << " "; 
                B[p] = A[m-1][i]; p++;
            }             
        }   
        m--; //thu nho so hang o buoc sau
        //4.In cot dau tien tu duoi len tren                   
        if (l < n) { 
            for (i = m - 1; i >= k; --i) { 
                //cout << A[i][l] << " "; 
                B[p] = A[i][l]; p++;
            }             
        } 
        l++; //ghi nhan cot tiep theo o buoc sau
    } 
    //B2: Dao nguoc mang B[]
    for(int q=p-1; q>=0;q--)
    	cout<<B[q]<<" ";
    cout<<endl;
} 
//OOP Solution
vector<int> reverseSpiral( int R, int C, vector<vector<int> >&a ) { 
    //B1: tao mang soan oc 1 chieu B[]
    vector <int> B ; //tao mang B[] gom n*m phan tu va chi so p=0
	int i, k = 0, l = 0; //khoi tao k, l
    while (k < R && l < C) { 
        //1. In hang thu dau tien tu trai qua phai
        for (i = l; i < C; ++i) { 
            //cout << A[k][i] << " "; 
            B.push_back(a[k][i]); 
        } 
        k++;  //ghi nhan hang k o buoc sau
        //2. In cot cuoi cung tu tren xuong duoi          
        for (i = k; i < R; ++i) { 
            //cout << A[i][n - 1] << " "; 
            B.push_back(a[i][C-1]);
        } 
        C--; //thu nho so cot o buoc sau  
        //3. In hang duoi cung tu phai qua trai
        if (k < R) { //neu k van chua la hang cuoi cung
            for (i = C - 1; i >= l; --i) { 
                //cout << A[m - 1][i] << " "; 
                B.push_back(a[R][i]);                
            }             
        }   
        R--; //thu nho so hang o buoc sau
        //4.In cot dau tien tu duoi len tren                   
        if (l < C) { 
            for (i = R - 1; i >= k; --i) { 
                //cout << A[i][l] << " "; 
                B.push_back(a[i][l]);                
            }             
        } 
        l++; //ghi nhan cot tiep theo o buoc sau
    } 
    return B;
} 
//test solution
int main(void) { 
    int A[MAX][MAX], m, n, T;cin>>T;
    while(T--){ 
    	cin>>m>>n; //nhap m, n
    	Init(A, m, n);//nhap mot test
		Solution(A, m, n);//thuc hien giai phap
	}
} 
