//dien dau cong hoac nhan vao cac chu so 
// de nhan duoc gia tri lon nhat
#include <bits/stdc++.h> 
using namespace std; 
// Giai phap giai quyet
int Solution(string str) {
    // chuyen ky tu dau tien thanh mot so
    int res = str[0] -'0';     
    for (int i = 1; i < str.length(); i++) { //duyet cac ky tu con lai
        if (str[i]=='0'||str[i]=='1'||res < 2 ) //neu dieu nay xay ra
            res += (str[i]-'0'); //dien phep cong         
        else //dien phep nhan
            res *= (str[i]-'0');
    }     
    return res;
} 
// Test Solution 
int main() { 
	int T; cin>>T;
	while(T--) {
		string str; cin>>str;
		cout<<Solution(str)<<endl;
	}    
}
