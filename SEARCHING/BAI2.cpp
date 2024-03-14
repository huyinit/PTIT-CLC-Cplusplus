// tim kiem nhi phan  
#include <bits/stdc++.h> 
using namespace std; 
//Solution1: Phuong phap tim kiem nhi phan  
int search(int A[], int n, int x) {   
	int L=0; //thiet lap can duoi
	int H=n-1; //thiet lap can tren
	int M = (L+H)/2; //thiet lap phan tu o giua
	while(L<=H)  { //lap khi nao can duoi van nho hon can tren
		if(x>A[M]) //neu x lon hon phan tu o giua
			L = M+1; //di chuyen can duoi
		else if (x<A[M]) //neu x lon hon phan tu o giua
			H = M-1; //di chuyen can tren
		else //neu x la phan tu A[mid] 
			return M;//dua ra ket quan
		M =(L+H)/2; //lay phan tu o giua
	}
	return -1;//ket luan x khong co mat
} 
//Solution2: 
int Search1(int A[], int L, int H, int x) {
    if (H >= L) { //neu can tren lon hon can duoi
        int M = L + (H - L) / 2; //lay phan tu o giua  
        if (A[mid] == x) //neu x la phan tu o giua
            return M;//tra lai vi tri mid
        if (A[M] > x) //neu x nho hon phan tu o giua
            //tim tu doan [L..M-1]
			return Search1(A, L, M - 1, x);  
        //neu x lon hon phan tu o giua
        //tim tu doan [M+1...H]
		return Search1(A, M + 1, H, x);
    }  
    // Neu can tren nho hon can duoi
    return -1;//ket luan khong tim thay
}
//Phuong phap dung STL trong C++
int Binary_Search(int A[], int n, int x) {
	int k = binary_search(A, A+n, x);
	if(k) return 1;	
	return(-1);	
}
int main(void) { 
    int T, n, x, *A; cin>>T;
    while(T--){
    	cin>>n>>x; A = new int[n+1];
    	for(int i=0; i<n; i++) cin>>A[i];
    	cout<<binary_search(A,A+n, x)<<endl;
    	delete A;
	}
} 

