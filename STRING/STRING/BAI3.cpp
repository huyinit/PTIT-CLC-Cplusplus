// BAI 3: kiem tra mot so nhi phan co chia het cho 5
#include <bits/stdc++.h>   
using namespace std; 
int ToBase4(string bin) { //cac so o he 4
    if (bin.compare("00") == 0) //"00 <=> 0 o he co so 4 
        return 0; 
    if (bin.compare("01") == 0)  //"01 <=> 1 o he co so 4
        return 1; 
    if (bin.compare("10") == 0)  //"10 <=> 2 o he co so 4
        return 2; 
    return 3;  //"11 <=> 3 o he co so 4
} 
string Solution(string bin) { 
    int n = bin.size(); //lay do dai chuoi nhi phan      
    if (n % 2 != 0) //neu bin co do dai le
        bin = '0' + bin; //them so 0 o dau de thanh chan
	//tinh tong cac chu so o vi tri chan va le
    int odd_sum, even_sum = 0;       
    int isOddDigit = 1; //vi tri le la 1
    for (int i = 0; i<bin.size(); i+= 2) { 
        if (isOddDigit) //neu o vi tri le
            odd_sum += ToBase4(bin.substr(i, 2)); 
        else //neu o vi tri chan
            even_sum += ToBase4(bin.substr(i, 2));           
        isOddDigit = isOddDigit ^ 1;  
    }           
    if (abs(odd_sum - even_sum) % 5 == 0) 
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
