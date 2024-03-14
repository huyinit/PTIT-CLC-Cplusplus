// tim phan tu lap lai dau tien trong mang
#include <bits/stdc++.h> 
using namespace std;  
//tim vi tri phan ti nho hon hoac bang X
int Find(int arr[], int low, int high, int x) {   
  	if (arr[high] <= x) // x lon nhat 
    	return high; 
  	if (arr[low] > x)  // x nho nhat nho nhat 
    	return low;   
  	// tim diem giua
  	int mid = (low + high)/2;      
  	if (arr[mid] <= x && arr[mid+1] > x) //neu x gan voi phan tu mid
    	return mid;     
  	if(arr[mid] < x) //neu dieu nay xay ra
      	return Find(arr, mid+1, high, x);   
  	return Find(arr, low, mid - 1, x); 
} 
void Kclosest(int arr[], int x, int k, int n) { //dua ra k phan tu gan x
    // Find the crossover point 
    int l = Find(arr, 0, n-1, x); //tim diem gan nhat nho hon x    
    int r = l+1;   // vi tri tim ben phai
    int count = 0; // luu vet phan tu da in  
    if (arr[l] == x) //neu phan tu la x
		l--;   	
    while (l >= 0 && r < n && count < k) { //in k phan tu
        if (x - arr[l] < arr[r] - x) //neu so ben phai thoa man
            cout<<arr[l--]<<" "; 
        else//nguoc lai in so ben trai
            cout<<arr[r++]<<" "; 
        count++; 
    }       
    while (count < k && l >= 0){ //neu khong con phan tu ben phai
        cout<<arr[l--]<<" ";  count++; 
  	}
    while (count < k && r < n) {	//neu khong con phan tu ben trai
        cout<<arr[r++]<<" ";  count++; 
	}
	cout<<endl;
} 
//Test Solution
int main() { 
	int *A, T, N, K, X; cin>>T;
	while(T--){
		cin>>N; A = new int[N];
		for(int i=0; i<N; i++) cin>>A[i];
		cin>>K>>X;
		Kclosest(A, X, K, N);
		delete A;
	}
} 
//5
//11 23 24 75 89
//2 24
