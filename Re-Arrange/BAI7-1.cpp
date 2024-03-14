#include <bits/stdc++.h>   
using namespace std;   
// so sanh hai xau 
int myCompare(string X, string Y) {     
    string XY = X.append(Y); //noi X voi Y      
    string YX = Y.append(X); //noi Y voi X  
    if(XY.compare(YX)>0) return 1;
    return 0;    
} 
//Sap xep cac phan tu cua vector 
void Largest(string A[], int n) { 
    sort(A, A+n, myCompare);   
    for (int i=0; i < n; i++ ) 
        cout << A[i]; 
} 
//chuong trinh chinh
int main() { 
    int n, T;cin>>T; string str;
	while(T--){
		cin>>n; string A[n];
		for(int i=0; i<n; i++) 
			cin>>A[i]; 			
		Largest(A,n);cout<<endl;
	}	      
}
