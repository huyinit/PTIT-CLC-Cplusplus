// kiem tra mot so co phai la Sephic
#include <bits/stdc++.h> 
typedef long long int ll;
using namespace std;   
bool Solution(ll n) { 	
	int odd =0, even=0, total=0;
    //Buoc 1: in ra uoc so 2 
    while (n % 2 == 0){  
        even++; total++;
		if(even>1) return false;       
        n = n/2;          
    }    
    //Buoc 2: dua ra cac uoc so le      
    for (ll i = 3; i <= sqrt(n); i = i + 2) {  
        // dua ra cac uoc so le
        even=0;
        while (n % i == 0){  
            total++; even++;
            if(even>1) return false;
            n = n/i;              
        }  
    }    
    //Buoc 3: in ra so cuoi cung
    if ( n>1 )  {
    	total++;
	}        
    return(total==3);
}  
//chuong trinh chinh
int main(void){  
	ll T, n;cin>>T;
	while(T--){
		cin>>n; cout<<Solution(n)<<endl;
	}
} 
