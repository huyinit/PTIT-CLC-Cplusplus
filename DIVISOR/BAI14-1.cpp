// Dem so cac so prime co dung ba uoc so trong khoang [L, R]
#include <bits/stdc++.h> 
#define MAX 1000000001
using namespace std;   
// sinh ra cac so nguyen to nho hon n
int Solution(int L, int R) { 
	int k = sqrt(R);
    bool prime[k+1]; 
    memset(prime, true, sizeof(prime)); 
    //B1: tim cac so nguyen to tu 0,.., k=sqrt(R)
    prime[0] = prime[1] = false; //so 0, 1 khong la nguyen to  
    for (int p=2; p*p<=k; p++) { //duyet cac so tu 2        
        if (prime[p] == true) { //neu p la nguyen to           
           for (int i=p*2; i<=k; i += p) //danh dau cac so khong la nguyen to
              prime[i] = false; 
        } 
    }       
    //dem cac so co dung ba uoc so tron khoang [L, R]
    int result=0;
    for (int i= sqrt(L);  i*i<=R ; i++) 
        if (prime[i]) {
        	cout<<i<<" "<<i*i<<endl;
			result++;	
		}
              
    return result;
} 
//test solution
int main() { 
    int T, L, R;cin>>T;
    while(T--){
    	cin>>L>>R;
    	cout<<Solution(L, R)<<endl;
	}	
} 
//2836 18176
