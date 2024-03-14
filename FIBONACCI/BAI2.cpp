//Tim so fibonacci thu n 
#include<bits/stdc++.h>
#define MAX 1000000007
using namespace std;
void FI(long long n){ //submit OK
	long long F[101]; F[0]=0; F[1]=1;
	cout<<0<<" "<<1<<" ";
	for(int i=2; i<=n; i++) {
		F[i] = (F[i-1] + F[i-2]) % MAX;
		cout<<F[i]<<" ";
	}
	cout<<endl;		
}
//Test solution 
int main (void) {
	long long T, n; cin>>T; //dua vao so luong test
	while(T--) { //lap het T test
		cin>>n; //nhan vao mot test
		FI(n);//dua ra ket qua 1 test
	}
}
