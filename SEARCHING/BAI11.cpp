// Tim diem chia mang thanh hai day tang giam
#include <bits/stdc++.h> 
using namespace std; 
  
int findMax(int A[], int low, int high) {        
    if (low == high)  
        return low;        
    // neu co hai phan tu thoa man dieu nay        
    if ((high == low + 1) && A[low] >= A[high])  
        return low;        
    //neu hai phan tu thoa man dieu nay        
    if ((high == low + 1) && A[low] < A[high])  
        return high;        
    int mid = (low + high)/2;     
    if ( A[mid] > A[mid + 1] && A[mid] > A[mid - 1])  
        return mid;  
    if (A[mid] > A[mid + 1] && A[mid] < A[mid - 1])  
        return findMax(A, low, mid-1);  
    else 
        return findMax(A, mid + 1, high);  
}    
int Search_Inc(int A[], int low, int high, int x){	
	int mid = (low+high)/2;	
	while(low<=high){
		if(x==A[mid]) return mid;
		else if(x>A[mid]) low = mid+1;
		else high=mid-1;
		mid =  (low+high)/2;
	}
	return -1;
}
int Search_Dec(int A[], int low, int high,int x){	
	int mid = (low+high)/2;	//9, 8, 7, 6, 5
	while(low<=high){
		if(x==A[mid]) return mid;
		else if(x>A[mid]) high = mid-1;
		else low=mid+1;
		mid =  (low+high)/2;
	}
	return -1;
}

void Solution(int A[], int n, int x){
	int k = findMax(A,0, n-1);
	if(k==0) 
		cout<<Search_Dec(A,0,n-1,x)<<endl;
	else if(k==n-1) 
		cout<<Search_Inc(A,0,n-1,x)<<endl;
	else {
		if (x==A[k]) cout<<k<<endl;
		else {
			int t = Search_Inc(A, 0,k-1,x);			
			if(t==-1) t = Search_Dec(A, k+1,n-1,x);
			cout<<t<<endl;
		}		
	}
}
//Test solution
int main(void)  {  
	int *A, n, x, T; cin>>T;
	while(T--){
		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		cin>>x;
		Solution(A,n,x);
		delete A;
	}
}    
