//BAI 7: Sum string
#include <bits/stdc++.h>
using namespace std;
string findSum(string X, string Y) { 
    if (X.length() > Y.length()) //trao doi de X>Y
        swap(X, Y);       
    string str = ""; //xau ket qua la rong  
    // lay do dai hai xau 
    int n1 = X.length(), n2 = Y.length();   
    // dao nguoc hai xau 
    reverse(X.begin(), X.end()); 
    reverse(Y.begin(), Y.end());   
    int carry = 0; //so nho la 0
    for (int i=0; i<n1; i++) { //cong bang tay binh thuong
        int sum = ((X[i]-'0')+(Y[i]-'0')+carry); 
        str.push_back(sum%10 + '0');   
        carry = sum/10; //so nho buoc tiep theo
    }   
    // them phan con lai cua X 
    for (int i=n1; i<n2; i++)   { 
        int sum = ((Y[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    }   
    // so cuoi cung 
    if (carry) 
        str.push_back(carry+'0');   
    // dao nguoc xau ket qua 
    reverse(str.begin(), str.end());       
    return str; 
} 
//Test Solution  
int main() { 
	int T; string X, Y, Result;cin>>T;
	while(T--){
		cin>>X>>Y; Result = findSum(X,Y);
		int n1=X.length(), n2=Result.length();
		if(n1==n2) cout<<Result<<endl;
		else cout<<X<<endl;
	}
} 
