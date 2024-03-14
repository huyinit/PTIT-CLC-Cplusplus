// Tinh (x^y)%p
#include <iostream>
typedef long long int ll;
using namespace std; 
// Solution 1: su dung vong lap
ll power(ll x, ll y, ll p) {
    ll res = 1;     // thiet lap x^0=1 
    x = x % p; //thiet lap x la so nho hon p   
    if (x == 0) return 0; // x=0 ta nhan 0 
    while (y > 0) { //lap den y=0        
        if (y & 1) //neu y la so le
            res = (res*x) % p; //nhan voi x voi modulo p 
        // den day y chac chan chan
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
} 
//solution 2: de qui
ll power(ll x, ll y, ll p) {
    ll temp; x = x%p;
    if(x==0) return 0;
    if( y == 0)
        return 1;
    temp = power(x, y / 2, p) %p;
    if (y % 2 == 0)
        return (temp * temp)%p;
    else
        return (x * ((temp * temp)%p) )%p;
}
//Test solution
int main(void) { 
    int y, p, T; long long x; cin>>T;
    while(T--) {
    	cin>>x>>y>>p;
    	cout<<power(x,y,p)<<endl;
	}
}
