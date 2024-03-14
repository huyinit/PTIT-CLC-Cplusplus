#include<bits/stdc++.h>
#define MAX 101
typedef long long ll;
using namespace std; 
ll F[MAX];
//Solution 1: 
void Generation_Fib(void) {     	
  	F[0] = 0;  F[1] = 1; //hai so Fibonacci dau tien  
  	for (int i = 2; i <=MAX; i++) { 
      	F[i] = (F[i-1] + F[i-2]);       	
  	}     	  	
} 
string Search(ll n){ //tim xem n co mat trong mang
	for(int i=0; i<MAX; i++)
		if(n==F[i]) return "Yes";
	return "No";
} 
//Solution 2:
bool Test(ll x) { //kiem tra x co phai so chinh phuong
    ll s = sqrt(x); 
    return (s*s == x); 
}   
bool Check_F(ll n) { //kiem tra n co la Fibonacci
	//n la Fibonacci neu 5*n*n + 4
	// hoac 5*n*n - 4 la mot so chinh phuong
    return Test(5*n*n + 4) || 
           Test(5*n*n - 4); 
} 
int main (void) { 
	ll T, n;cin>>T; //Generation_Fib();
	while(T--){
		cin>>n; 
		if (Check_F(n))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
} 
