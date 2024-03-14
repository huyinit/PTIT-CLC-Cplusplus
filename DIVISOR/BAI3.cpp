// Sang Eratoshenes tim cac so nguyen to nho hon n 
#include <bits/stdc++.h> 
using namespace std;
//Sang nguyen to   
void Eratosthenes(int n) { 
    bool prime[n+1]; //tao mang bool n + 1 phan tu
    memset(prime, true, sizeof(prime)); //dien vao gia tri true  
    prime[0]=prime[1]=false;//so 0, 1 khong la nguyen to
    for (int p=2; p*p<=n; p++) { //duet cac so p=2,.., sqrt(p)
        if (prime[p] == true){ //neu la nguyen to 
            //cac so nay chac chan khong phai nguyen to
			for (int i=p*p; i<=n; i += p) 
                prime[i] = false; //xac nhan khong la nguyen to
        } 
    } 
    for (int p=2; p<=n; p++) //cac so nguyen to tu 2 den n
       if (prime[p]) 
          cout << p << " "; 
    cout<<endl;
}  
// Test solution 
int main(void) { 
    int T, N; cin>>T;
    while(T--){
    	cin>>N; Eratosthenes(N);
	}
}
