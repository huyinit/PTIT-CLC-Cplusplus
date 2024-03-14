// in ra uoc so lon nhat cua n
#include <bits/stdc++.h> 
typedef long long int ll;
using namespace std;   
void Solution(ll n) { 
	ll max =0; 
    //Buoc 1: in ra uoc so nguyen to chan 
    while (n % 2 == 0){          
        n = n/2;  
        if(max<2) max=2;
    }    
    //Buoc 2: in ra cac uoc so nguyen to le      
    for (ll i = 3; i <= sqrt(n); i = i + 2) {  
        // dua ra cac uoc so le
        while (n % i == 0){              
            n = n/i;  
            if(max<i) max =i;
        }  
    }    
    //Buoc 3: in ra so cuoi cung
    if (max< n )          
        max =n;
    cout<<max<<endl;
}  
//chuong trinh chinh
int main(void){  
	ll T, n;cin>>T;
	while(T--){
		cin>>n; Solution(n);
	}
} 
