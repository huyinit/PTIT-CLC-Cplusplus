// liet ke cac so co dung ba uoc so trong khoang [L,R]
#include <bits/stdc++.h> 
typedef long long int ll;
const long long int MAX= 1000000000001;
using namespace std;   
bool *prime; int k;
void Seive(void) {   
	k = sqrt(MAX);	prime = new bool[k+1];		
    memset(prime, true, k+1); 
    prime[0] = prime[1] = 0; //so 0, 1 khong la nguyen to  
    for (int p=2; p*p<=k; p++) { //duyet cac so tu 2        
        if (prime[p] == true) { //neu p la nguyen to           
           for (int i = p*p; i<=k; i += p) //danh dau cac so khong la nguyen to
              prime[i] = false; 
        } 
    }      
} 
int Result(ll L, ll R) {
	int  low = sqrt(L), high = sqrt(R), count=0;
	for(int i=low; i<high; i++){		
		if(prime[i] ) {
			cout<<i*i<<" "; count++;	
		}
	}
	return count;
}
//test solution
int main() { 
    ll T, L, R; Seive();cin>>T;
    while(T--){
    	cin>>L>>R;
    	cout<<Result(L,R)<<endl;
	}
} 

// 6334 26500
//15
//16

