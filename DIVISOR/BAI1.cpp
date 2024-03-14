// in ra cac uoc so nguyen to cua n
#include <bits/stdc++.h> 
typedef long long int ll;
using namespace std;   
void Solution(ll n) { 	
    //Buoc 1: in ra uoc so nguyen to chan 
    while (n % 2 == 0){  
        cout << 2 << " ";  
        n = n/2;          
    }    
    //Buoc 2: in ra cac uoc so le      
    for (ll i = 3; i <= sqrt(n); i = i + 2) {  
        // dua ra cac uoc so le
        while (n % i == 0){  
            cout << i << " ";  
            n = n/i;              
        }  
    }    
    //Buoc 3: in ra uoc so nguyen to cuoi cung
    if ( n>2 )  
        cout << n << " "<<endl;              
}  
//chuong trinh chinh
int main(void){  
	ll T, n;cin>>T;
	while(T--){
		cin>>n; Solution(n);
	}
} 
