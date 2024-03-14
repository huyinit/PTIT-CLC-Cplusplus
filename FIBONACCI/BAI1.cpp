//Tim so fibonacci thu n 
#include<bits/stdc++.h>
#define MAX 1000000007
using namespace std;
// Phuong phap de qui 
// n=50 chay hon 1 phut
long long F( long long n) { //submit fail
    if (n <= 1) //neu n=0 hoac n =1
        return n%MAX; // F0 = 0, F1 = 1    
    return (F(n-1) + F(n-2))%MAX; //n>1 thi Fn = Fn-1 + Fn-2
} 
//Phuong phap su dung mang
//n = 50: 1/1000 MicroS
long long F1(long long n){ //submit OK
	long long F[101]; F[0]=0; F[1]=1;
	for(int i=2; i<=n; i++) 
		F[i] = (F[i-1] + F[i-2]) % MAX;
	return F[n];
}
//Test solution 
int main (void) {
	long long T, n; cin>>T; //dua vao so luong test
	while(T--) { //lap het T test
		cin>>n; //nhan vao mot test
		cout<<F1(n)<<endl;//dua ra ket qua 1 test
	}
}
