// Day con tang giam dai nhat
#include <bits/stdc++.h> 
using namespace std;   
//goi lis[i]: day con tang dai nhat ket thuc tai A[i]
//goi lds[i]: day con giam dai nhat bat dau tai A[i]  
//ket qua: tra lai max lis[i]+lds[i]-1
int lbs( int A[], int n ) { 
   int i, j;   
   //tao mang lis[i]=1
   int *lis = new int[n]; 
   for (i = 0; i < n; i++) 
      lis[i] = 1;   
   
   //tinh tosn do dai day con tang dai nhat ket thuc tai A[i]   
   for (i = 1; i < n; i++) //duyet tu trai qua phai
      for (j = 0; j < i; j++) 
         if (A[i] > A[j] && lis[i] < lis[j] + 1) 
            lis[i] = lis[j] + 1;   
   
   //tao mang lds[i]=1      
   int *lds = new int [n]; 
   for (i = 0; i < n; i++) 
      lds[i] = 1;   
   
   //tim day con giam dai nhat bat dau tai A[i]
   for (i = n-2; i >= 0; i--) //duyet tu phai qua trai
      for (j = n-1; j > i; j--) 
         if (A[i] > A[j] && lds[i] < lds[j] + 1) 
            lds[i] = lds[j] + 1;   
  
   //tim max cua lis[i] + lds[i] - 1
   int max = lis[0] + lds[0] - 1; 
   for (i = 1; i < n; i++) 
     if (lis[i] + lds[i] - 1 > max) 
         max = lis[i] + lds[i] - 1; 
   return max; 
}   
//test Solution
int main() { 
	int *A, n, T; cin>>T;
	while(T--){
		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		cout<<lbs(A, n)<<endl;
	}
} 

