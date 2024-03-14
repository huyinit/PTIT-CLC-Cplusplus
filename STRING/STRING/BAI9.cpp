//Tim so lon nhat trong xau
#include<bits/stdc++.h>
using namespace std;  
// Giai phap giai quyet
int Solution(string str ) {
    int num = 0, res = 0;      
    for (int i = 0; i<str.length(); i++){ //duyet tu trai qua phai str
        if (str[i] >= '0' && str[i] <= '9') //neu la mot ky tu so
            num = num * 10 + (str[i]-'0');//chuyen thanh mot so          
        else  { //cap nhat gia tri lon nhat
            res = max(res, num);//lay res la max giua res va num              
            num = 0;// khoi tao lai num
        }
    }      
    return max(res, num);//lay so cuoi cung
}  
// Test solution
int main() { 
	int T; cin>>T;
	while(T--) {
		string str; cin>>str;
		cout << Solution(str)<<endl;
	}
}
