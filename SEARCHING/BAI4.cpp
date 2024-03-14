// tim phan tu trong mang da sap xep vong
#include <bits/stdc++.h> 
using namespace std;   
int search(int A[], int l, int h, int x) { 
    if (l > h) //neu can duoi vuot can tren
		return -1;//ket luan x khong co trong mang   
    int m = (l+h)/2; //lay phan tu o giua
    if (A[m] == x) return m; //neu tim thay x o vi tri m      
    if (A[l] <= A[m])  { //neu day duoc sap trong khoang l..m
        if (x >= A[l] && x <= A[m]) //ta tim nhi phan trong khoan l..m-1
        	return search(A, l, m-1, x); 
        return search(A, m+1, h, x); 
    } 
    if (x >= A[m] && x <= A[h]) //neu day duoc sap trong khoang m..h
        return search(A, m+1, h, x);   
    return search(A, l, m-1, x); 
} 
//A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}; x = 3: kq: 8
//B1: Search(A, 0, 8, 3): 5<9: Search(A, 5, 8, 3)
//B2: Search(A, 5, 8, 3): 10>=1: Search(A, 7, 8, 3)

//Test Solution  
int main() { 
    int A[] = {4, 5, 6, 7, 8, 9, 1, 2, 3}; 
    int n = sizeof(A)/sizeof(A[0]); 
    int x = 6; 
    int i = search(A, 0, n-1, x); 
  
    if (i != -1) 
    cout << "Index: " << i << endl; 
    else
    cout << "x not found"; 
}
