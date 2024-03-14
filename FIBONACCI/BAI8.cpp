#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
// phuong phap 1: O(n): fail
int Solution1(int N, int K) { 
    int ans = 0; //ket qua la 0
    for (int i = 1; i <= N; i++) //duyet tu 1..N
        ans += (i % K); //cong don lai la xong      
    return (ans==K); 
}   
//Phuong phap 2: O(1):OK
int Solution2(int N, int K) { 
    int ans = 0;   
    int y = N / K;//co y doan, moi doan co tong s=1+2,+..+K-1 
    int x = N % K; //con lai s = 1+2 +.. + x 
    //vi vay ket qua la:
    ans = (K * (K - 1) / 2) * y;//y doan co tong s=1+2,+..+K-1
	 ans = ans + (x * (x + 1)) / 2; //cong them voi tong x so tu nhien dau tien  
    return (ans==K); 
} 
int main(void) { 
	int N, K, T; cin>>T;
	while(T--){
		cin>>N>>K;
		cout<<Solution2(N,K)<<endl;
	}
}
