#include <bits/stdc++.h> 
using namespace std; 
// Ham tra lai mot string la tong hai string
string string_sum(string str1, string str2) { 
    if (str1.size() < str2.size()) //neu do dai str1<str2
		swap(str1, str2); //doi hai string  	
    int m = str1.size(); //do dai xau str1
    int n = str2.size(); //do dai xau str2
    string tong = ""; //tong la rong  
    // tong hai xau str2, str1 
    int du = 0; 
    for (int i = 0; i < n; i++) {   
        // tong hai ky tu 
        int t = ((str1[m - 1 - i] - '0') + 
                  (str2[n - 1 - i] - '0') + 
                  du) % 10; 
  
        du = ((str1[m - 1 - i] - '0') + 
                 (str2[n - 1 - i] - '0') + 
                 du) / 10; 
  
        tong = char(t + '0') + tong; 
    } 
  
    for (int i = n; i < m; i++) { 
        int t = (str1[m - 1 - i] - '0' + 
                  du) % 10; 
        du = (str1[m - 1 - i] - '0' + 
                 du) / 10; 
        tong = char(t + '0') + tong; 
    } 
  
    if (du) 
        tong = char(du + '0') + tong; 
    return tong; 
} 
bool checkSum(string str, int beg, int len1, int len2) {   
    string s1 = str.substr(beg, len1); //lay xau con thu nhat
    string s2 = str.substr(beg + len1, len2); //lay xau con thu hai
    string s3 = string_sum(s1, s2); //lay xau tong  	
    int s3_len = s3.size(); //tim do dai xau tong  
    // neu do dai xau tong lon hon do dai phan con lai
    if (s3_len > str.size() - len1 - len2 - beg) 
        return false; 
    // neu xau tong bang xau con tiep theo
    if (s3 == str.substr(beg + len1 + len2, s3_len)) {   
        // neu day la xau con cuoi cung
        if (beg + len1 + len2 + s3_len == str.size()) 
            return true;   
        // goi de qui voi hai xau con tiep theo
        return checkSum(str, beg + len1, len2,s3_len); 
    }       
    return false; 
} 
bool Test(string str) { 
    int n = str.size(); //lay do dai xau str  
    // chon hai xau conso va kiem tra  
    for (int i = 1; i < n; i++) {//do dai xau thu nhat la i	
        for (int j = 1; i + j < n; j++) {//do dai xau thu 2 la j	
            if (checkSum(str, 0, i, j)) 
                return true;   
        }
	}
    return false; 
} 
int main() { 
	int T; cin>>T; string S;
	while(T--){
		cin>>S;
		cout<<Test(S)<<endl;
	}
}
