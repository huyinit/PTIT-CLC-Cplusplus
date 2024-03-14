//Bai 2: dua ra cac phan tu giong nhau o tat ca cac hang
#include <bits/stdc++.h> 
#define MAX 1001 
using namespace std; 
//dua ra ket qua 1 test
void Result(int *A[MAX], int n){
	cout<<endl;
	for(int i=0; i<n; i++){ //duyet theo hang
		for(int j=0; j<n; j++) //duyet theo cot
			cout<<A[i][j]<<" ";//in ra phan tu			
		cout<<endl;//ket thuc mot hang
	}	
}
//thiet lap ma tran bang mang cac con tro
void Init(int *A[MAX], int n){
	//cap phat mien nho cho mang cac con tro
	for(int i=0; i<n; i++){ //duyet theo cac hang
		A[i] = new int[n];//cap phat mien nho cho cac con tro
	}
	//nhap du lieu cho n con tro
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) 
			cin>>A[i][j];
	}	
} 
//Giai phap giai quyet
void Solution(int *A[MAX], int n){	
	int Hash[MAX] = {0}; //thiet lap mang Hash[i]=0, i=0, 2,..,MAX
	//B1: ghi nhan so lan xuat hien cac so hang thu 0
	for(int i=0; i<n; i++) { //voi moi i=0, 1, .., n
		if(Hash[A[0][i]]==0) //neu Hash[A[0][i]]=0
			Hash[A[0][i]]=1; //ta dien vao so 1
	} 
	//B2: ghi nhan so lan xuat hien cac so hang tiep theo
	for(int i=1; i<n; i++){	//duyet cac hang 1,2,..,n-1	
		for(int j=0; j<n; j++) { //duyet tren cac cot 0, 1, 2,..,n-1		
			if( Hash[A[i][j]]==i) { //neu gia tri nay da ton tai va la i
				Hash[A[i][j]]++;//tang so lan xuat hien cua hang len 1
			}				
		}
	}	
	//B3: dua ra ket qua
	int res=0;
	for(int i=0; i<MAX; i++){ //duyet cac so tu 0..1000
		if(Hash[i]==n) //neu n hang so i deu co mat
			res++; //ket qua tang len 1
	}
	cout<<res<<endl;	
}
//test solution  
int main() { 
	int n, T; int *A[MAX]; cin>>T;
	while(T--){
		cin>>n; Init(A, n); Solution(A,n); 
	}
} 

