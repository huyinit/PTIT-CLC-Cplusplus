//Tong lon nhat giua hai mang
#include<bits/stdc++.h> 
using namespace std; 
int Solution(int A1[], int A2[], int m, int n) { 
    // khoi tao diem bat dau A1[] va A2[] 
    int i = 0, j = 0;   
    // khoi tao ket qua va tong A1[] and A2[]. 
    int  result = 0, sum1 = 0, sum2 = 0;   
    // thuc hien ba buoc lap tuong tu merge sort 
    while (i < m && j < n) {         
        if (A1[i] < A2[j]) //neu dieu nay xay ra
            sum1 += A1[i++]; // cong A1[] vao sum1           
        else if (A1[i] > A2[j]) //neu dieu nay xay ra
            sum2 += A2[j++];// cong  A2[] vao sum2    
        else  { // truong hop A1[i]=A2[j]  
            result += max(sum1, sum2);//lay ket qua la max(sum1, sum2)   
            // cap nhat sum1 va sum2 cho cac phan tu giong nhau
            sum1 = 0, sum2 = 0;   
            while (i < m &&  j < n && A1[i] == A2[j]) { 
                result = result + A1[i++]; j++; 
            } 
        } 
    }   
    // cong them doan cuoi cung trong A1[] 
    while (i < m) 
        sum1  +=  A1[i++];   
    // cong them doan cuoi cung trong A2[] 
    while (j < n) 
        sum2 +=  A2[j++];   
    // lay ket qua cuoi cung 
    result +=  max(sum1, sum2);   
    return result; 
}   
int max_path_sum(int A[], int B[], int l1, int l2){
int Solution(int A[], int B[], int l1, int l2) { 
    // khoi tao diem bat dau A1[] va A2[] 
    int i = 0, j = 0;   
    // khoi tao ket qua va tong A1[] and A2[]. 
    int  result = 0, sum1 = 0, sum2 = 0;   
    // thuc hien ba buoc lap tuong tu merge sort 
    while (i < l1 && j < l2) {         
        if (A[i] < A2[j]) //neu dieu nay xay ra
            sum1 += A[i++]; // cong A1[] vao sum1           
        else if (A1[i] > A2[j]) //neu dieu nay xay ra
            sum2 += A2[j++];// cong  A2[] vao sum2    
        else  { // truong hop A1[i]=A2[j]  
            result += max(sum1, sum2);//lay ket qua la max(sum1, sum2)   
            // cap nhat sum1 va sum2 cho cac phan tu giong nhau
            sum1 = 0, sum2 = 0;   
            while (i < l1 &&  j < l2 && A[i] == A2[j]) { 
                result = result + A[i++]; j++; 
            } 
        } 
    }   
    // cong them doan cuoi cung trong A1[] 
    while (i < l1) 
        sum1  +=  A[i++];   
    // cong them doan cuoi cung trong A2[] 
    while (j < l2) 
        sum2 +=  A2[j++];   
    // lay ket qua cuoi cung 
    result +=  max(sum1, sum2);   
    return result; 
}   
    

// Test Solution 
int main() { 
    int *A1, *A2, m, n, T; cin>>T;
    while(T--){
    	cin>>m>>n; A1 = new int[m]; A2=new int[n];
    	for(int i=0; i<m; i++) cin>>A1[i];
    	for(int i=0; i<n; i++) cin>>A2[i];
    	cout<<Solution(A1, A2, m, n)<<endl;
    	delete A1;delete A2;
	}
}
