// tong cac uoc so cua a va b trong khoang [m,n]
#include <bits/stdc++.h> 
using namespace std;   
int FindLCM(int a, int b) { //tim USCLN cua a va b 
    return (a * b) / __gcd(a, b); 
} 
int Solution(int m, int n, int a, int b) {     
    int lcm = FindLCM(a, b); //tim boi chung nho nhat cua a va b  
    int a_divisor = n / a - (m - 1) / a; //so cac so a chia het
    int b_divisor = n / b - (m - 1) / b; //so cac so b chia het      
    int common_divisor = n / lcm - (m - 1) / lcm; //so cac so thuoc phan giao  
    int ans = a_divisor + b_divisor - common_divisor; 
    return ans; 
}   
// Test Solutiom
int main() { 
    int m , n , a , b , T; cin>>T;
    while(T--){
    	cin>>m>>n>>a>>b;
    	cout<<Solution(m, n, a, b) << endl;
	}
}
