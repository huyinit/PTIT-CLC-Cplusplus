//BAI 6: tim max, min cua tong hai so
//sao cho ta thay doi qua lai giua so 5 va so 6
//Truong hop X1, X2 la cac so
#include<bits/stdc++.h>
using namespace std; 
// Ham tra lai mot so neu ta thay the chu so p thanh q
int Replace(int x, int p, int q) {
    int res = 0;
    int k = 1; 
    while (x > 0) {
        int du = x % 10;//lay chu so cuoi cung cua x         
        if (du == p) //neu chu so la chu so p
            res = res + q * k;//lay ket qua phep nhan 
        else //neu khong phai la so o
            res = res + du * k;//lay ket qua phep nhan 
        k *= 10;//moi lan k nhan voi 10
        x = x / 10;//sau do chia x cho 10
    }
    return res;//so duoc chuyen
} 
// Giai phap thay 5 bang 6 de co min, max cua tong
void Solution(int x1, int x2) {
    // tong nho nhat hai so la doi so 6 thanh so 5
    int Min = Replace(x1, 6, 5) + Replace(x2, 6, 5); 
    // tong lon nhat hai so la doi so 5 thanh so 6 
    int Max = Replace(x1, 5, 6) +  Replace(x2, 5, 6);
    cout << Min<<" "<<Max<<enld;    
}
 
// Test solution
int main() {
    int T, X1 , X2 ; cin>>T;
    while(T--) {
    	cin>>X1>>X2;
    	Soltion(X1, X2);
	}
}
