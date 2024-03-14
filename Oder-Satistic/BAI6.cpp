//tim max(j-i): A[j]>A[i]
#include <bits/stdc++.h> 
typedef long long int ll;  
using namespace std; 
//Solution 1: submit fail
ll Solution1(ll A[], int n) { 
    ll maxDiff = -1;   
    for (int i = 0; i < n; ++i) { 
        for (int j = n-1; j >= i; --j) { 
            if(A[j] > A[i] && maxDiff <= (j - i)) 
                maxDiff = j - i; 
        } 
    }   
    return maxDiff; 
} 
//Solution 2: submit OK
ll Solution2(ll A[], ll n)  {  
	if(n<=1) return 0;
    ll maxDiff; ll i, j;    
    ll *LMin = new ll[(sizeof(ll) * n)];  
    ll *RMax = new ll[(sizeof(ll) * n)];   
    // tim min tu A[0],..,A[i] luu vao LMin[]   	
    LMin[0] = A[0];  
    for (i = 1; i < n; i++) {	
        LMin[i] = min(A[i], LMin[i - 1]);        
	}	
    // tim max tu A[j],..,A[n-1] luu vao LMin[]     
    RMax[n - 1] = A[n - 1];  
    for (j = n - 2; j >= 0; j--)  {
	    RMax[j] = max(A[j], RMax[j + 1]);     	    
	}
    //tim max j-i tu trai qua phai 	   
    i = 0, j = 0, maxDiff = -1;  
    while (j < n && i < n)      {  
        if (LMin[i] <= RMax[j])   {  
            maxDiff = max(maxDiff, j - i);  
            j = j + 1;  
        }  
        else
            i = i + 1;  
    }    
    delete LMin;delete RMax;
    return maxDiff;  
}  
//Test Solution
int main() { 
  	ll *A, n, T;  cin>>T;
  	while(T--){
  		cin>>n; A = new ll[n];
		for(ll i=0; i<n; i++)  cin>>A[i];
		cout<<Solution2(A,n)<<endl; delete A;	
	}
}
