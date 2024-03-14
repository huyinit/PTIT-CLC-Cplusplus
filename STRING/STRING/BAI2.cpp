// Kiem tra 1 so co chia het cho 11
#include<bits/stdc++.h> 
using namespace std; 
int Solution(string str) { 
    int n = str.length(); //lay do dai str  
    //B1: tinh toan tong cac so o vi tri chan, le
    int S1 = 0; //S1: tong cac so o vi tri chan
	int S2 = 0; //S2: tong cac so o vi tri le
    for (int i=0; i<n; i++)  { //duyet tu dau den cuoi xau         
        if (i%2 == 0) //neu i la chan
            S1 += (str[i]-'0'); //cong vao S1
        else //neu i la le
            S2 += (str[i]-'0'); //cong vao S2
    }       
    //B2: tra lai ket qua S1-S2 chia het cho 11
    return ((S1 - S2) % 11 == 0); 
} 
//test solution
int main() { 
    string str; int T; cin>>T;
    while(T--){
    	cin>>str;
    	cout<<Solution(str)<<endl;
	}
} 
