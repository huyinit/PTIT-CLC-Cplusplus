// Dua ra uoc so nguyen to thu k cua n
# include<bits/stdc++.h> 
using namespace std;   
int Solution(int n, int k) { 
    if(n<=1) return -1;
	// tim uoc so nguyen to la 2
    while (n%2 == 0) { 
        k--; n = n/2; 
        if (k == 0) 
         return 2; 
    } 
	//tim uoc so nguyen to le
    for (int i = 3; i <= sqrt(n); i = i+2) {         
        while (n%i == 0) { //lap neu n chia het cho i
            if (k == 1) //neu k==1
              	return i;   
            k--; n = n/i; 
        } 
    } 
    if (n > 2 && k == 1) //neu n la nguyen to
        return n;   
    return -1; 
} 
//Test Solution  
int main() { 
    int n,k, T; cin>>T;
	while(T--){
		cin>>n>>k;
		cout<<Solution(n, k)<<endl;		
	}
}  
