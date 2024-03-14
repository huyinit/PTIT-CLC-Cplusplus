#include <bits/stdc++.h>
using namespace std;
//tim kiem nhi phan
int search(int A[], int n, int x) { 
  	int low=0, high=n-1, mid =(low+high)/2;
  	while(low<=high){
  		if(A[mid] ==x) {  			
		  	if(mid==0||(x>A[mid-1])) return mid;
		  	else high=mid-1;
		}
  		else if(x>A[mid]) low = mid+1;
  		else high = mid-1;
  		mid =(low+high)/2;
	}
	return -1;
}  
// Sort Solution 
void Solution(int A1[], int A2[], int m, int n) { 
    //B1: copy A1[] vao temp[]; dat visited[i]=0
	int temp[m], visited[m]; 
    for (int i = 0; i < m; i++) { 
        temp[i] = A1[i]; 
        visited[i] = 0; 
    } 
  	//B2: sap xep cac phan tu trong temp[]    
    sort(temp, temp + m); 
  	//B3: tien hanh sap xep    
    int ind = 0; //index bat dau tu 0  
    for (int i = 0; i < n; i++) { 
        // tim A2[i] xuat hien trong temp
        int f = search(temp, m, A2[i]); 
		if (f>=0)  {
	        //dua cac so co gia tri A2[i] vao A1[]
			for (int j = f; (j < m && temp[j] == A2[i]); j++) { 
    	        A1[ind++] = temp[j]; 
        	    visited[j] = 1; 
        	} 			
		}
    }   
    // dua vao A2[] cac so con lai cua temp[]
    for (int i = 0; i < m; i++) 
        if (visited[i] == 0) 
            A1[ind++] = temp[i]; 
    //B4: dua ra ket qua
    for (int i = 0; i < m; i++) 
        cout<<A1[i]<<" " ;
    cout<<endl;
}  
// Test Solution 
int main() { 
    int *A1, *A2, m, n, T; cin>>T;
    while(T--){
    	cin>>m>>n;A1 = new int[m]; A2= new int[n];
    	for(int i=0; i<m; i++) cin>>A1[i];
  		for(int i=0; i<n; i++) cin>>A2[i];  	
  		Solution(A1,A2, m, n); delete A1;delete A2;
	}
} 
