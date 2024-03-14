//Tim trong mang da sap xep vong
#include <bits/stdc++.h> 
using namespace std;   
//thuat toa tim kiem nhi phan chuan 
int Search(int A[], int L, int H, int X) { 
  	if (H < L) //neu can duoi vuot qua can tren
    	return -1; //ket luan khong tim thay      
  	int M = (L + H)/2; // lay M la vi tri o giua
  	if (X == A[M]) //neu tim thay X
    	return M; //ket luan vi tri cua X      
  	if (X > A[M]) //neu dieu nay xay ra
    	//tim tu doan M + 1 den Ht
		return Search(A, (M + 1), H, X);       	
   	else //tim tu doan L den M-1 
    	return Search(A, L, (M -1), X); 
} 
//tim vi tri cuoi cung chia thanh hai day sap xep: A[3]=6
int Find(int A[], int L, int H) { //tim vi tri xoay
  	// base cases  {10, 9, 8, 7, 6, 5};
  	if (H < L) return -1; //neu can duoi vuot qua can tren
  	if (H == L) return L; //neu can tren bang can duoi  
   	int M = (L + H)/2; //lay vi tri o giua: L + (H - L)/2;
  	if (M < H && A[M] > A[M + 1]) //neu dieu nay xay ra
    	return M;       
   	if (M > L && A[M] < A[M - 1]) 
    	return (M-1);       
   	if (A[L] >= A[M]) 
    	return Find(A, L, M-1);       
   	else return Find(A, M + 1, H); 
} 
  
// tim phan tu trong day sap xep  vong   
int Solution(int A[], int n, int X) { 
  	int pivot = Find(A, 0, n-1); //tim vi tri phan chia hai day    	
  	if (pivot == -1) //neu mang khong bi phan chia
    	return Search(A, 0, n-1, X); //tim nhi phan nguyen thuy 
  	// neu ton tai diem phan chia   	
  	if (A[pivot] == X) //neu dieu nay xay ra
    	return pivot; //privot la vi tri cua X      
  	if (A[0] <= X) //neu day tang tu A[0] ..A[privot]
    	return Search(A, 0, pivot-1, X); //tim nhi phan doan nay      
    return Search(A, pivot+1, n-1, X); //tim nhi phan doan con lai
}   
//test solution
int main() { 
  	// gia su X =3
  	int A1[] = {10, 9, 8, 7, 6, 5}; 
  	int n = sizeof(A1)/sizeof(A1[0]); 
  	//int X = 11;       	 
  	//cout << Solution(A1, n, X)<<endl;              
  	cout << (A1, 0, n-1)<<endl;
  	return 0; 
} 
