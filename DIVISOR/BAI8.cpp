//tim x lon nhat de N! chia het cho P mu x
#include <bits/stdc++.h> 
using namespace std;   
int largestPower(int n, int p) {     
    int x = 0;   
    // tim  x = n/p + n/(p^2) + n/(p^3) + .... 
    while (n) { 
        n /= p; 
        x += n; 
    } 
    return x; 
}   
int main() { 
    int n , p, T ; cin>>T;
    while(T--){
    	cin>>n>>p;
    	cout<<largestPower(n,p)<<endl;
	}
} 
