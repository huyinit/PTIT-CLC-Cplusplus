// BAI 4: kiem tra mot so chia het cho 8 
// nhung khong chia het cho 3
#include <bits/stdc++.h> 
using namespace std; 
#define MAX 1000 
int Solution(char s[], int len) {     
    int sum[MAX], dp[MAX][3];  
    memset(sum, 0, sizeof(sum)); 
    memset(dp, 0, sizeof(dp));   
    dp[0][0] = 1;   
    // lap tren do dai string. 
    int cur = 0, dig = 0; 
    for (int i = 1; i <= len; i++) { 
        dig = int(s[i-1])-48; 
        cur += dig; cur %= 3;   
        sum[i] = cur;   
        // Tien to cua xau 
        dp[i][0] = dp[i-1][0]; 
        dp[i][1] = dp[i-1][1]; 
        dp[i][2] = dp[i-1][2];   
        dp[i][sum[i]]++; 
    }   
    int ans = 0, dprev = 0, value = 0, dprev2 = 0;   
    for (int i = 1; i <= len; i++)  { 
        dig = int(s[i-1])-48;   
        if (dig == 8) 
            ans++; 
        // Taking two digit number. 
        if (i-2 >= 0)  { 
            dprev = int(s[i-2])-48;  // 10th position 
            value = dprev*10 + dig;  // Complete 2 digit 
                                     // number 
              if ((value%8 == 0) && (value%3 != 0)) 
                ans++; 
        } 
        // Taking 3 digit number. 
        if (i-3 >= 0)  { 
            dprev2 = int(s[i-3])-48; // 100th position 
            dprev  = int(s[i-2])-48;  // 10th position 
  
            // Complete 3 digit number. 
            value = dprev2*100 + dprev*10 + dig; 
  
            if (value%8 != 0) 
                continue; 
            ans += (i-2); 
            ans -= (dp[i-3][sum[i]]); 
        } 
    }   
    return ans; 
} 
  
// Test solution 
int main() { 
    char str[MAX]; int n, T; cin>>T; 
	while(T--){
		cin>>n;
		for(int i=0; i<n; i++) cin>>str[i];
		cout<<Solution(str,n)<<endl;
	}
} 
