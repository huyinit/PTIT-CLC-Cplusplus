// liet ke cac so nho hon n co dung ba uoc so
#include <bits/stdc++.h> 
using namespace std;   
// sinh ra cac so nguyen to nho hon n
void Solution(int n) { 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    prime[0] = prime[1] = 0; //so 0, 1 khong la nguyen to  
    for (int p=2; p*p<=n; p++) { //duyet cac so tu 2        
        if (prime[p] == true) { //neu p la nguyen to           
           for (int i=p*2; i<=n; i += p) //danh dau cac so khong la nguyen to
              prime[i] = false; 
        } 
    }       
    //dua ra cac so co dung ba uoc so 
    for (int i=0;  i*i <= n ; i++) 
        if (prime[i]) 
          cout << i*i << " "; 
    cout<<endl;
} 
//test solution
int main() { 
    int T, N;cin>>T;
    while(T--){
    	cin>>N;
    	Solution(N);
	}	
}
