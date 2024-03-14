//Matrix 1: Quay phan tu dau tien cua ma tran
#include <bits/stdc++.h> 
#define MAX 10 
using namespace std; 
//Ham in ra ma tran ket qua
void Result(int m, int n, int mat[MAX][MAX]) {   
    for (int i=0; i<m; i++) { //duyet theo cac hang
        for (int j=0; j<n; j++) //dua ra cac phan tu theo hang
          cout << mat[i][j] << " "; 
        cout << endl; 
    } 
    cout<<endl;//ket thuc mot test

} 
//giai phap quay vong
void Solution(int m, int n, int mat[MAX][MAX]) { 
    int row = 0, col = 0; //thiet lap hang, cot la 0
    int prev, curr; //hai bien luu hang truoc va cot hien tai
    while (row < m && col < n) {   //lap tren cac hang va cac cot
        if (row + 1 == m || col + 1 == n) //neu la hang, cot cuoi cung
            break; //thoi khong phai lam nua
  		//luu phan tu hang tiep theo se   		
        prev = mat[row + 1][col];//prev la phan tu dau cua hang sau  
        //1. Dich cac phan tu hang tren cung
        for (int i = col; i < n; i++) { 
            curr = mat[row][i]; //luu gia tri phan tu hien tai
            mat[row][i] = prev; //thay bang gia tri prev
            prev = curr; //luu gia tri truoc do
        } 
        row++; //ghi nhan  hang tiep theo 
        //2. Dich cac phan tu cot cuoi cung
        for (int i = row; i < m; i++) { 
            curr = mat[i][n-1]; //luu gia tri phan tu hien tai
            mat[i][n-1] = prev; //thay bang gia tri prev
            prev = curr; //luu gia tri truoc do
        } 
        n--; //ghi nhan so cot giam di 1  
        //3. Dich cac phan tu hang duoi cung
        if (row < m) { //neu dieu nay dung
            for (int i = n-1; i >= col; i--) { //duyet theo cac cot
                curr = mat[m-1][i]; //luu gia tri phan tu hien tai
                mat[m-1][i] = prev; //thay bang gia tri prev
                prev = curr; //luu gia tri truoc do
            } 
        } 
        m--; //so hang giam di 1  
        //4. Dich cac phan tu cot dau tien
        if (col < n) { //neu dieu nay dung
            for (int i = m-1; i >= row; i--)  { //duyet theo cac hang
                curr = mat[i][col]; //luu gia tri phan tu hien tai
                mat[i][col] = prev; //thay bang gia tri prev
                prev = curr; //luu gia tri truoc do
            } 
        } 
        col++; //ghi nhan cot tiep theo
    }       
} 

//test solution  
int main() { 
	int m, n, T; int A[MAX][MAX]; cin>>T;
	while(T--){
		cin>>m>>n; 
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++) 
				cin>>A[i][j];
		}
		Solution(m, n, A); Result(m, n, A);
	}
} 

