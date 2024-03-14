// dem so cac so co so uoc so le trong khoang [n, m] 
#include <bits/stdc++.h> 
using namespace std;   
int Solution(int n) { 
	if(n<=1) return 1;
   	return (int)pow(n-1,0.5); 
} 
// Test Solution 
int main() { 
	int T, n; cin>>T;
	while(T--){
		cin>>n;
		cout<<Solution(n)<<endl;
	}
} 
