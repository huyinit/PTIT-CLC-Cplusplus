// Tim uoc so nho nhat thu k
#include <bits/stdc++.h>
using namespace std; 
void Solution(int n, int k) {	
    for(int i = 1; i * i < n; i++) {
        if (n % i == 0)
            cout<<i<<" "; 
    }
    for(int i = sqrt(n); i >= 1; i--)    {
        if (n % i == 0)
            cout<<(n/i)<<" ";
    }
    cout<<endl;
}
// test solution
int main() {    
	Solution(10);
	Solution(100);
}
