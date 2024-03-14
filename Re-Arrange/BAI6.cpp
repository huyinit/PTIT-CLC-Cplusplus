// Rearrang array 
#include <bits/stdc++.h>   
using namespace std;   
// dua ra ket qua
void Result(int A[], int n) { 
    for (int i = 0; i < n; i++) 
        cout << A[i] << " "; 
    cout<<endl;
}  
// dua so 0 ve cuoi mang
void Zeros(int A[], int n) { 
    //Chuyen so khac 0 len dau mang
    int count = 0; 
    for (int i = 0; i < n; i++) 
        if (A[i] != 0)               
            A[count++] = A[i]; 
	//dien not cac so 0 vao cuoi		  
    while (count < n) 
        A[count++] = 0; 
}  
// Sap dat lai cac phan tu
void Solution(int A[], int n) { 
    if (n == 1) {//neu mang chi co 1 phan tu
        cout<<A[0]<<endl; return; 
	}
    for (int i = 0; i < n - 1; i++) { //duyet tren cac phan tu  
        // neu dieu nay xay ra
        if ((A[i] != 0) && (A[i] == A[i + 1])) {               
            A[i] = 2 * A[i]; //nhan doi phan tu hien tai              
            A[i + 1] = 0; //dat phan tu ke tiep la 0  
            i++; //chu y: tang i len 1
        } 
    }       
    Zeros(A, n); //dua so 0 ve cuoi
    Result(A,n);
}   
// Test Solution
int main() { 
    int *A, n, T; cin>>T;
    while(T--){
    	cin>>n; A = new int[n];
    	for(int i=0; i<n; i++) cin>>A[i];
    	Solution(A,n); delete A;
	}
} 
