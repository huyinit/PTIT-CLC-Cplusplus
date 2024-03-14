// Tim so mien so 1 bi bao quanh boi so 0 
#include <bits/stdc++.h> 
#define MAX 51  
using namespace std;  
int m, n, A[MAX][MAX]; //ma tran dau vao cua bai toan
int row[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; //tam phep dich theo hang
int col[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; //tam phep dich theo cot
bool chuaxet[MAX][MAX];   
//thiet lap mot test
void Init(void){
	cin>>m>>n;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++) {
			cin>>A[i][j];
			chuaxet[i][j]= true;
		}			
	}
}
// kiem tra o (x, y) co di chuyen hop le? 
int Test( int x, int y) { 
	if(x>=0 && x<m && y>=0 && y<n && A[x][y] && chuaxet[x][y]) 
		return true;
	return false;
}   
// Giai phap de qui tim mot mien so 1 bao quang boi so 0 
void DFS( int x, int y) { 
    chuaxet[x][y] = false;  
    // de qui den o tiep theo
    for (int k = 0; k < 8; ++k) 
        if (Test(x + row[k], y + col[k])) 
            DFS( x + row[k], y + col[k]); 
} 
int Solution(void) { 
    // tao mang visited va dien vao false
    int count = 0; //so mien la 0
    for (int x = 0; x < m; ++x) {	
        for (int y = 0; y < n; ++y){		
            // neu o co gia tri 1 va chua tham
            if (A[x][y] && chuaxet[x][y]) { 
                DFS( x, y);                   
                ++count; //ket thuc ta cong so mien
            } 
  		}
  	}
    return count; 
}   
// Test solution
int main() { 
	int T; cin>>T;
	while(T--){
		Init();
		cout<<Solution()<<endl;
	}
}
