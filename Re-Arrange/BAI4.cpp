// Sap dat lai cac so trong mang sao cho
// cac phan tu vi tri chan lon hon hoac bang
// cac phan tu o vi tri le
#include<bits/stdc++.h> 
using namespace std;   
void Solution(int A[], int n) { 
    //B1: sap xep lai cac phan tu cua mang 
    sort(A, A + n);   
    //B2: thuc hien sap dat lai
    int ans[n]; // mang ket qua
    int p = 0, q = n - 1; //su dung hai con tro dau va cuoi
    for (int i = 0; i < n; i++) { //duyet tren mang A[]        
        if ((i + 1) % 2 == 0) //chi so chan nhan so lon nhat
            ans[i] = A[q--];           
        else //chi so le nhan so so nho nhat
            ans[i] = A[p++]; 
    }   
    //B3: dua ra ket qua
    for (int i = 0; i < n; i++)  
        cout << ans[i] << " "; 
    cout<<endl;
} 
//Test Solution  
int main() { 
    int *A, T, n; cin>>T;
    while(T--){
    	cin>>n; A = new int[n];
    	for(int i=0; i<n; i++) cin>>A[i];
    	Solution(A,n); delete A;
	}
} 
