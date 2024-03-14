// tim max tich cac phan tu cua day con
#include <bits/stdc++.h> 
using namespace std;   
//gia su mang luon co mot mang con co tich lon hon 1
int Solution(int A[], int n) { 
    // tich duong lon nhat cua day con ket thuc tai vi tri hien tai
    int max_ending_here = 1;   
    // tich am lon nhat ket thuc tai vi tri hien tai
    int min_ending_here = 1;   
    // thiet lap gia tri lon nhat can tim
    int max_so_far = 1; 
    int flag = 0; //co trang thai co gia tri 0    
    for (int i = 0; i < n; i++) { //duyet tu trai qua phai
        // xu ly cac so duong 
        if (A[i] > 0) { 
            max_ending_here = max_ending_here * A[i]; 
            min_ending_here = min(min_ending_here * A[i], 1); 
            flag = 1; 
        }   
        // xu ly cac so 0
        else if (A[i] == 0) { 
            max_ending_here = 1; 
            min_ending_here = 1; 
        }         
       //xu ly cac so am  
        else { 
            int temp = max_ending_here; 
            max_ending_here = max(min_ending_here * A[i], 1); 
            min_ending_here = temp * A[i]; 
        } 
        // cap nhat  max_so_far
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
    } 
    if (flag == 0 && max_so_far == 1) 
        return 0; 
    return max_so_far; 
}   
// Test solution 
int main() { 
    int *A, n, T; cin>>T;
	while(T--) {
		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		cout<<Solution(A, n)<<endl;
	}
} 
