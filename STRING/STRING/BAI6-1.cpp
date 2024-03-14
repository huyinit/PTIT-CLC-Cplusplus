//BAI 6: tim max, min cua tong hai so
//sao cho ta thay doi qua lai giua so 5 va so 6
//Truong hop X1, X2 la cac so
#include<bits/stdc++.h>
using namespace std; 
// Ham tra lai mot so neu ta thay the chu so p thanh q
string Replace(string X, char p, char q) {
    int n = X.length(); //lay do dai xau
    for(int i=0; i<n; i++) 
    	if(X[i]==p) X[i] = q;
    return X;
} 
// Ham tra lai mot string la tong hai string
string Sum(string X1, string X2) { 
    if (X1.size() < X2.size()) //neu do dai X1<X2
		swap(X1, X2); //doi hai string  	
    int m = X1.size(); //do dai xau X1
    int n = X2.size(); //do dai xau X2
    string tong = ""; //tong la rong  
    // tong hai xau X2, X1 
    int du = 0; 
    for (int i = 0; i < n; i++) { //duyet theo do dai xau ngan hon  
        // tong hai ky tu lay phan du voi 10
        int t = ((X1[m - 1 - i] - '0') + 
                  (X2[n - 1 - i] - '0') + 
                  du) % 10; 
  
        du = ((X1[m - 1 - i] - '0') + 
                 (X2[n - 1 - i] - '0') + 
                 du) / 10; 
  
        tong = char(t + '0') + tong; 
    } 
  
    for (int i = n; i < m; i++) { 
        int t = (X1[m - 1 - i] - '0' + 
                  du) % 10; 
        du = (X1[m - 1 - i] - '0' + 
                 du) / 10; 
        tong = char(t + '0') + tong; 
    } 
  
    if (du) 
        tong = char(du + '0') + tong; 
    return tong; 
} 

string Solution(string X1, string X2) {
	string Min1 = Replace(X1,'6','5');
	string Min2 = Replace(X2,'6','5');
	string Min  =  Sum(Min1, Min2);
	
	string Max1 = Replace(X1,'5','6');
	string Max2 = Replace(X2,'5','6');
	string Max  =  Sum(Max1, Max2);
	cout<<Min<<" "<<Max<<endl;
}
// Test solution
int main() {
	int T; string X1, X2; cin>>T;
	while(T--) {
		cin>>X1>>X2;
		Solution(X1, X2);
	} 	
}
