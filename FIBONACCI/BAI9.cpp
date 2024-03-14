#include <bits/stdc++.h>
using namespace std;
// tim s%mod voi s la mot string ky tu so
unsigned int sModM(string s, unsigned int mod) { 
    unsigned int number = 0; 
	for (unsigned int i = 0; i < s.length(); i++) { 
        number = (number*10 + (s[i] - '0')); 
        number %= mod; //number luon la so nho hon mod
    } 
    return number; 
}   
// tim pow(a,b) % m 
unsigned int ApowBmodM(string a, unsigned int b, unsigned int m) {     
    unsigned int ans = aModM(a, m); //tim a%m
    unsigned int mul = ans; //
    for (unsigned int i=1; i<b; i++) //lap b-1 lan
        ans = (ans*mul) % m; //ans luon nho hon m  
    return ans; 
} 
  
// Driver program to run the case 
int main(void) { 
	int T, b, m; string a;cin>>T;
	while(T--){
		cin>>a>>b>>m;
		cout<<ApowBmodM(a, b, m)<<endl;
	}
} 
