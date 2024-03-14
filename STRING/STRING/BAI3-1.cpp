// BAI 3: kiem tra mot so nhi phan co chia het cho 5
#include <bits/stdc++.h>   
using namespace std; 
string Solution(string bin) { 
    int n = bin.length(); //lay do dai chuoi nhi phan      
    string str("");
    //B1: lam xau co do dai chan
    if (n % 2 != 0) {//neu bin co do dai le
        bin = '0' + bin; //them so 0 o dau de thanh chan
        n = n+1; //tang do dai cua bin len 1
	}	
	//B2: tim tong S1,S2: tong cac so o vi tri chan, le he co so 4
	int k=1; int S1=0, S2=0;
	for(int i=0; i<n; i+=2) {
		string temp(""); int t=0;
		temp = temp + bin[i] + bin[i+1];						
		if(temp=="00") t=0;
		else if(temp=="01") t=1;
		else if(temp=="10") t=2;
		else if(temp=="11") t=3;
		if(k) {S1 = S1 + t;	k=0;} //neu vi tri chan
		else {S2 = S2 + t;	k=1;} //neu vi tri le			
	}	
    if (abs(S1 - S2) % 5 == 0) 
        return "Yes"; 
    return "No";               
} 
// Test Solution 
int main() { 
    string bin; int T; cin>>T;
    while(T--){
    	cin>>bin;
		cout << Solution(bin)<<endl;	
	}
}  
