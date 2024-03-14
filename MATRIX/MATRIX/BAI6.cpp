//BAI 6: in cac phan tu o vung bien
#include <bits/stdc++.h> 
using namespace std;   
const int MAX = 100;   
void Solution(int A[MAX][MAX], int n) { 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1) 
                cout << A[i][j] << " "; 
        } 
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
		Solution(A,n);		
	}
}
