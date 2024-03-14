// in cac phan tu giong nhau cua ba mang duoc sap
//chu y cac phan tu lap lai
#include <bits/stdc++.h> 
typedef long long int ll;
using namespace std;  
void Solution(ll A[], ll B[], ll C[], int n1, int n2, int n3) {     
    int i = 0, j = 0, k = 0; //xuat phat tai i,j,k
	int count =0;      
    while (i < n1 && j < n2 && k < n3)  { //lap neu dieu nay dung
        if (A[i] == B[j] && B[j] == C[k]) { //neu dieu nay thoa man  
		 	cout << A[i] << " ";count++;   
			while(A[i]== A[i+1]) i++;
			while(B[j]==B[j+1]) j++;
			while(C[k]==C[k+1]) k++;
			i++; j++; k++; 
		 	
		}         
        else if (A[i] < B[j]) //truong hop x < y 
             i++;            
         else if (B[j] < C[k]) //truong hop y<z
             j++;            
         else //truong hop x>y && z<y
             k++; 
    } 
    if(count==0) cout<<"-1"<<endl;
    else cout<<endl;
} 
//Test Solution  
int main(void ) { 
	int T, n1,n2,n3;
	ll *A, *B, *C; cin>>T;
	while(T--){
		cin>>n1>>n2>>n3;
		A = new ll[n1]; B = new ll[n2]; C = new ll[n3]; 
		for(int i=0; i<n1; i++) cin>>A[i];
		for(int i=0; i<n2; i++) cin>>B[i];
		for(int i=0; i<n3; i++) cin>>C[i];
		Solution(A, B, C, n1, n2, n3);
		delete A;delete B;delete C;
	}
}
