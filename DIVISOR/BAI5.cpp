// tim cac so nguyen to trong khoang [L,R]
#include <bits/stdc++.h>
const int MAX = 100000; 
using namespace std;  
bool Prime[MAX]; 
void Eratosthenes(void) {         
	memset(Prime, true, sizeof(Prime)); //dien vao gia tri true  
	Prime[0]=false; Prime[1]=false;//0, 1 khong la so nguyen to
    for (int p=2; p*p<=MAX; p++) { //duyet tu so nguyen to dau tien la 2
        if (Prime[p] == true){ //neu p la nguyen to 
            for (int i=p*p; i<=MAX; i += p) //cac so khong phai nguyen to
                Prime[i] = false; 
        } 
    } 
}  
void Result(int m, int n){
	for(int i=m; i<=n; i++){
		if(Prime[i]) cout<<i<<" ";
	}
	cout<<endl;
}
int main(void){
	int T, m, n; Eratosthenes(); cin>>T;	
	while(T--){
		cin>>m>>n;
		Result(m,n);
	}
}
