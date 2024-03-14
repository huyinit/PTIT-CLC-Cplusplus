// In ra tat ca cac uoc so cua n
#include <bits/stdc++.h>
using namespace std; 
// Solution 2:
int kThSmallestFactor(int n, int k) {
	vector <int> v;
    for(int i = 1; i * i < n; i++) {
        if (n % i == 0)
            v.push_back(i);
    }
    for(int i = sqrt(n); i >= 1; i--)    {
        if (n % i == 0)
            v.push_back(n/i);
    }
    if(v.size()<k) return -1;
    return(v[k-1]);
}
// test solution
int main() {    
    cout<<kThSmallestFactor(4,3 )<<endl;    
    cout<<kThSmallestFactor(4,2 )<<endl;    
}
