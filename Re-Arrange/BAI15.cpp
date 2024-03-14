#include <bits/stdc++.h> 
using namespace std; 
void Solution(int A[], int n) {     
    int temp[n];//tao mang temp gom n phan tu 
    int small=0, large=n-1; //thiet lap chi so nho va lon
    int flag = true; //tao co trang thai la true 
    for (int i=0; i<n; i++) { 
        if (flag) //neu flag=true: dat phan tu lon nhat
            temp[i] = A[large--]; 
        else //neu flag = false: dat phan tu nho nhat
            temp[i] = A[small++];   
        flag = !flag; 
    }   
    // dua ra ket qua 
    for (int i=0; i<n; i++) {
        cout<<temp[i]<<" ";
	}
    cout<<endl;
}  
// Test Solution 
int main() { 
	int *A, T, n;cin>>T;	    
    while(T--){
    	cin>>n;A = new int[n];
    	for(int i=0; i<n; i++) cin>>A[i];
    	Solution(A, n); delete A;
	}
}
