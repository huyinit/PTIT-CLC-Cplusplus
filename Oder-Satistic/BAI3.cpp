//tim so lon nhat thu k cua ma tran
//cac hang da duoc sap
#include<bits/stdc++.h> 
#define MAX 50
using namespace std;  
void Solution(int A[][MAX], int n, int k) { 
	int *Result = A[0];//Result tro den hang thu nhat
	int *temp; //con tro trung gian temp
	for(int i=1; i<n; i++) { //duyet tu hang tiep theo		
		temp = new int[i*n + n];//cap phat mien nho cho temp
		//hop nhat cac hang truoc do va hang hien tai
		merge(Result, Result+ i*n, A[i], A[i]+n, temp);		
		Result = temp; //Resul tro den temp
		
	}
	cout<<Result[k-1]<<endl;//tra lai phan tu nho nhat thu k
} 
//Test solution
int main() { 
  	int T, n,k, A[MAX][MAX]; cin>>T;
  	while(T--){
  		cin>>n>>k; 
  		for(int i=0; i<n; i++) 
		  	for(int j=0; j<n; j++) cin>>A[i][j];
		Solution(A,n, k); 
	}
} 
