// tim phan tu nho nhat trong mang sap vong  
#include <bits/stdc++.h> 
using namespace std; 
  
int findMin(int arr[], int low, int high)  {  
    if (high < low) return arr[0];        
    if (high == low) return arr[low];       
    int mid = low + (high - low)/2; /*(low + high)/2;*/
    if (mid < high && arr[mid + 1] < arr[mid])  
    	return arr[mid + 1];    
    if (mid > low && arr[mid] < arr[mid - 1])  
    	return arr[mid];  
    if (arr[high] > arr[mid])  
    	return findMin(arr, low, mid - 1);  
    return findMin(arr, mid + 1, high);  
}  
//Test Solution  
int main()  {  
	int T, *A, n; cin>>T;
	while(T--){
		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		cout<<findMin(A,0,n-1)<<endl;
		delete A;
	}
}  
