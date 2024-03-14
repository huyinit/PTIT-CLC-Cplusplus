// Sap dat lai cac phan tu cua mang sao cho A[i] = i. 
// Dua vao -1 neu A[i] khong bieu dien gia tri trong mang
#include <bits/stdc++.h>   
using namespace std; 
// Solution1: submit fail
void Solution1(int A[], int n) {
    int i, j, temp; 
    //B1: dien cac gia tri A[i]=i
    for (i = 0; i < n; i++) { //duyet cac gia tri i:1, 2,.., n-1
        for (j = 0; j < n; j++){ //duyet cac gia tri j:1, 2,.., n-1
            if (A[j] == i) { //neu ton tai A[j]=i;
                temp = A[j]; A[j] = A[i]; //doi cho A[j] cho A[i]
				A[i] = temp; break;
            }
        }
    } 
    //B2: dien cac gia tri A[i]!=i
    for (i = 0; i < n; i++)  { //duyet tu dau den cuoi mang        
        if (A[i] != i) { //neu dieu nay xay re=a
            A[i] = -1;
        }
    }
 	//B3: dua ra ket qua
    for (i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout<<endl;
}
//Solution 2: submit OK 
void Solution2(int A[], int n){
	//B1: tao mang Hash[] ghi tat ca -1
	int *Hash = new int[n+1]; 		
	for(int i=0; i<n; i++) Hash[i]=-1;
	//B2: dien vao mang Hash[] cac so co A[i]=i
	for(int i=0; i<n; i++){
		if(A[i]>=0) Hash[A[i]] =A[i];
	}
	//B3: dua ra ket qua
	for(int i=0; i<n; i++){
		cout<<Hash[i]<<" "; 
	}
	cout<<endl;	
}
// Test Solution
int main() { 
	int T, n, *A; cin>>T;
	while(T--){
		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		//Solution1(A,n); //submit fail
		Solution2(A,n); delete A;
	}
} 
 
