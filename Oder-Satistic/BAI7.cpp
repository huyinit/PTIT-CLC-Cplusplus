#include <bits/stdc++.h> 
using namespace std; 
//Solution 1: Submit khong thanh cong
void Solution1(int A[], int n, int k){  
    int j, max;    
    for (int i = 0; i <= n - k; i++){  
        max = A[i];    
        for (j = 1; j < k; j++) {  
            if (A[i + j] > max)  
                max = A[i + j];  
        }  
        cout << max << " ";  
    }  
    cout<<endl;
}  
//Solution 2: Submit thanh cong
void Solution(int A[], int n, int k) { 
    deque<int> Qi(k); 
    int i; 
    for (i = 0; i < k; ++i) { 
        while ((!Qi.empty()) && A[i] >= A[Qi.back()]) 
            Qi.pop_back(); // Remove from rear 
  
        // Add new element at rear of queue 
        Qi.push_back(i); 
    } 
    for (; i < n; ++i) { 
        cout << A[Qi.front()] << " "; 
        while ((!Qi.empty()) && Qi.front() <= i - k) 
            Qi.pop_front(); // Remove from front of queue 
        while ((!Qi.empty()) && A[i] >= A[Qi.back()]) 
            Qi.pop_back(); 
        Qi.push_back(i); 
    } 
    cout << A[Qi.front()]<<endl; 
} 
int main()  {  
	int T, *A, n, k; cin>>T;
	while(T--){
		cin>>n>>k; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		Solution(A, n, k);
		delete A;
	}	 
}
