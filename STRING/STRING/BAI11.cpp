// Tim xau nho nhat cua S1 chua tat ca cac ky tu cua S2
#include <bits/stdc++.h>
using namespace std; 
const int MAX = 256; 
// Solution1: su dung hai con tro
string Solution1(string S1, string S2) {
    int n1 = S1.length();//lay do dai xau S1
    int n2 = S2.length();//lay do dai xau S2
    if (n1 < n2) { //neu do dai xau S1 nho hon S2
        //cout << "khong ton tai";
        return "-1";
    }      
    int H2[MAX] = { 0 };//luu so lan xuat hien cac ky tu S2
    int H1[MAX] = { 0 };//luu so lan xuat hien cac ky tu S1 
    // Tim so lan xuat hien cac ky tu trong S2    
    for (int i = 0; i < n2; i++)
        H2[S2[i]]++; 
    int start = 0, index = -1, Min = INT_MAX;    
    int count = 0;//lay count=0
    for (int j = 0; j < n1; j++) { // duyet cac ky tu tren S1       
        H1[S1[j]]++;//dem so lan xuat hien ky tu trong S1
       	//S1 = "ADOBECODEBANC";
	    //S2 = "ABC";
        if (H1[S1[j]] <= H2[S1[j]]) //neu dieu nay xay ra
            count++;//tiep tuc tang count                 
        if (count == n2) { //neu tat ca cac ky tu da co mat           
            // thuc hien tim xau nho nhat
            while (H1[S1[start]] > H2[S1[start]] 
                   || H2[S1[start]] == 0) {  
                if (H1[S1[start]] > H2[S1[start]])
                    H1[S1[start]]--;
                start++;
            } 
            // cap nhat do dai xau nho nhat
            int Curr_min = j - start + 1;
            if (Min > Curr_min) {
                Min = Curr_min;
                index = start;
            }
        }
    }     
    if (index == -1) { //neu index van la 1       
        return "-1";
    } 
    //tra lai xau con tu vi tri index do dai min
    return S1.substr(index, Min);
}
 // Solution 2: cua so truot (slide windows)
 string Minimum_Window(string S1, string S2) { 
    int H[MAX] = { 0 }; 
    // Thiet lap cac tham so
    int ans = INT_MAX; // do dai dap an la ans
    int start = 0; // chi so bat dau cua xau
    int count = 0; //thiet lap count la 0   
    // Anh xa cac ky tu trong S2 vao H[]
    //Tim so cac ky tu khac nhau trong S2[]
    for (int i = 0; i < S2.length(); i++) {
        if (H[S2[i]] == 0) //neu S2[i] la 0
            count++;//tang so ky tu len 1
        H[S2[i]]++;
    } 
    // Khoi tao cua so dau tien
    int i = 0; //cua so truot tren S2
    int j = 0; //cua so truot tren S1 
    // Duyet cac cua so truot
    while (j < S1.length()) { //duyet tren S1[]
        // Calculations
        H[S1[j]]--; //giam so lan xuat hien S1[j] trong H[]
        if (H[S1[j]] == 0) //neu dieu nay xuat hien
            count--;//count giam di 1         
        if (count == 0) { //neu count =0
            while (count == 0) {                
                if (ans > j - i + 1) { //tim min cua hai doan
                    ans = min(ans, j - i + 1);//doi ans
                    start = i;//lay doan start la i
                }
                // tim cua so truot so 1 Sliding I
                H[S1[i]]++;
                if (H[S1[i]] > 0)
                    count++; 
                i++;
            }
        }
        j++;
    } 
    if (ans != INT_MAX)
        return S1.substr(start, ans);
    else
        return "-1";
}
// Test Solution
int main(){
    string S1, S2; int T; cin>>T;
    while(T--) {
    	cin>>S1; cin>>S2;
    	cout<<Solution1(S1, S2)<<endl;
	} 
}
