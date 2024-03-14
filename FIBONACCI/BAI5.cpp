#include<bits/stdc++.h>
using namespace std;  
int Fib(int n) { //tim so fibonacci thu n luu vao F[]     
    int F[n + 2];
    F[0] = 0; F[1] = 1; //so Fib thu nhat va thu 2 
    for( int i = 2; i <= n; i++) { //tu so thu 3 tro di         
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n];
}
int GCD(int M, int N) {
    if (M == 0)
        return N;
    return GCD(N%M, M);
} 
// Chu y GCD(Fib(M), Fib(M)) = GCD(M, N)
int Solution(int M, int N){
    return Fib(GCD(M, N))%100;
} 

// Test solution
int main (void) {
    int T, M, N; cin>>T;
    while (T--) {
    	cin>>M>>N;
    	cout<<Solution(M, N)<<endl;
    }
}

