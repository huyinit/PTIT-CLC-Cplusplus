//Tim chu so cuoi cung cua so Fib thu n
//Chu y : Fib(200) = 280571172992510140037611932413038677189525
#include<bits/stdc++.h>
using namespace std;  
// Tra lai so cuoi cua so Fibonacci thu n
int Solution(int N){
	//B1: Tao mang luu chu so cuoi cua 60 so Fib dau tien
    int F[61]; //tao mang 61 phan tu
    F[0]=0; F[1]=1; //chu so cuoi cung cua hai so dau tien
    for(int i=2; i<=60; i++) //chu so cuoi cua 60 so con lai
        F[i] = (F[i-1] + F[i-2]) % 10; //lay modulo 10
    return F[N%60]; //chu so cuoi cung cac so Fib voi N>60
}
// Test solution
int main (void) {
    int T, n; cin>>T;
    while (T--) {
    	cin>>n;
    	cout<<Solution(n)<<endl;
    }
}
