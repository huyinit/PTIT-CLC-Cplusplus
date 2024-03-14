// Liet ke cac so vua nguyen to vua Fibonacci nho hon N
#include <bits/stdc++.h>
#define MAX 10001
using namespace std;
bool Prime[MAX];
// Kiem tra so co phai la so chinh phuong
bool Test(int n) {
    int s = sqrt(n);
    return (s * s == n);
}
// Sang nguyen to cho test lon nhat
void Sieve_Prime(void) {	   
    memset(Prime, true, sizeof(Prime));
    Prime[0]=Prime[1] = false; //so 0, 1 khong la nguyen to
    for (int p = 2; p * p <MAX; p++) { //duyet tu so 2 tro di
        if (Prime[p] == true) { //neu p la nguyen to 
            // cap nhat cac so khong la nguyen to
            for (int i = p * p; i <= MAX; i += p)
                Prime[i] = false;
        }
    }
} 
// Giai phap giai quyet bai toan
void Solution(int n) {
    for (int i=2; i<=n; i++)   //kiem tra tu so 2 tro di
       if (Prime[i] && (Test(5*i*i + 4)||Test(5*i*i - 4)))
                cout << i << " "; //nu dung la Fibonacci
    cout<<endl; 
}
// Test solution
int main() {
    int T, n; cin>>T; //dua vao so luong test		
	Sieve_Prime();//Tinh mot lan cac so nguyen to nho hon MAX
	while(T--){
		cin>>n; //dua vao test nho hon Max
    	Solution(n); //dua ra ket qua
    	
    }    
}
