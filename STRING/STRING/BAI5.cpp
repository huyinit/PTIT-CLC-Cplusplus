//Sap dat lai cac ky tu trong xau sao cho 
//hai ky tu ke nhau deu khac nhau
#include<bits/stdc++.h>
using namespace std;
//const int MAX_CHAR = 26;
//tim ky tu xuat hien nhieu lan nhat
char Max(int F[26]) {
    int max = 0; char ch;
    for (int i = 0; i < 26; i++) {
        if (F[i] > max) {
            max = F[i];
            ch = 'a' + i;
        }
    } 
    return ch;
}  
//Giai phap giai quyet
string Solution(string S) { 
    int n = S.size();//lay do dai S
    if (n==0) //neu S rong
        return "-1"; 
    int F[26]={0};
    //B1: tim so lan xuat hien moi ki tu
    for (int i=0; i<n; i++)
        F[S[i] - 'a']++; 
    //B2: lay ky tu xuat hien nhieu nhat
	char ch_max = Max(F);//ky tu xuat hien nhieu nhat
    int maxCount = F[ch_max - 'a'];//vi tri cua ky tu trong F[]     
    if (maxCount > (n + 1) / 2) // Neu dieu nay xay ra
        return "-1"; 
    //B3: phuong an sap dat
	string res(n, ' ');//dat xau do dai n ky tu trong 
    int ind = 0; //bat dau tai chi so ind=0
    // dien ky tu xuat hien nhieu nhat vao vi tri chan
    while (maxCount) { //lap den khi maxCount=0
        res[ind] = ch_max;//dat ky tu xuat hien nhieu nhat
        ind = ind + 2;//tang chi so chan
        maxCount--; //giam maxCount
    }
    F[ch_max - 'a'] = 0;//thiet lap so lan la 0 
    // dien tiep vi tri chan sau do le
    for (int i = 0; i < 26; i++) { //lap tren mang F
        while (F[i] > 0) {
        	if(ind>=n) //neu het vi tri chan
				ind=1; //bat dau tai vi tri le
            //ind = (ind >= n) ? 1 : ind;
            res[ind] = 'a' + i;//dat ky tu vao xau ket qua
            ind += 2;//tang 2 cho ind
            F[i]--;//giam F[i]
        }
    }
    return res;
}
// Test Solution
int main() {
	int T;	cin>>T;
	while(T--)	{
	    string str; cin>>str;
	    cout<<Solution(str)<<endl;
	}
}  
