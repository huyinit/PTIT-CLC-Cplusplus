// tim max cua hieu hai phan tu cua mang
#include <bits/stdc++.h> 
using namespace std; 
//Phuong an 1: submit fail
int Solution1(int A[], int n) {      
  	int max_diff = A[1] - A[0]; //lay hieu nho nhat ban dau
  	for (int i = 0; i < n-1; i++)  { //duyet tu dau den n-2
    	for (int j = i+1; j < n; j++) { //duyet tu dau den cuoi     
      		if (A[j] - A[i] > max_diff)  //tim max cua hai phan tu
        		max_diff = A[j] - A[i]; 
    	}  
  	}          
  	if(max_diff<0) return -1;
  	return max_diff; 
}    
//Phuong an 2: submit OK
int Solution2(int A[], int n) { 
    // goi max_dif = A[1] - A[0];
    int max_diff = A[1] - A[0];        
    // tim phan tu nho nhat da gap 
    int min_element = A[0]; 
    for(int i = 1; i < n; i++) {      
       	if (A[i] - min_element > max_diff)                              
       		max_diff = A[i] - min_element;          
       	if (A[i] < min_element) 
       		min_element = A[i];                      
    }        
    if(max_diff<0) return -1;
    return max_diff; 
}  
//Phuong an 3: submit OK
int Solution3(int A[], int n) {     
    int maxDiff = -1;//thiet lap ket qua ban dau          
    //tim  phan tu lon nhat tu ben phai
    int maxRight = A[n-1];    
    for (int i = n-2; i >= 0; i--) { 
        if (A[i] > maxRight) 
            maxRight = A[i]; 
        else { 
            int diff = maxRight - A[i]; 
            if (diff > maxDiff) { 
                maxDiff = diff; 
            } 
        } 
    } 
    return maxDiff; 
} 
//Phuong an 4: submit OK
int Solution4(int A[], int n) { 
	//tao mang luu hieu hai phan tu
    int diff[n-1]; 
    for (int i=0; i < n-1; i++) 
        diff[i] = A[i+1] - A[i];   
    // tim tong lon nhat trong mang diff[]
    int max_diff = diff[0]; 
    for (int i=1; i<n-1; i++)  { 
        if (diff[i-1] > 0) 
            diff[i] += diff[i-1]; 
        if (max_diff < diff[i]) 
            max_diff = diff[i]; 
    } 
    if(max_diff<0) return -1;
    return max_diff; 
} 
//Test Solution
int main() { 
  	int *A, n, T;  cin>>T;
  	while(T--){
  		cin>>n; A = new int[n];
		for(int i=0; i<n; i++)  cin>>A[i];
		cout<<Solution3(A,n)<<endl; delete A;	
	}
} 
