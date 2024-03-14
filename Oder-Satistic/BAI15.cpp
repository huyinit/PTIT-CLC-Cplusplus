// Vi du ve thuat toan merge hai day da duoc sap
#include <bits/stdc++.h>    
using namespace std;
void Solution(int *A, int n1, int *B, int n2, int *C) {
	A = new int[n1];//cap phat mien nho cho A
	B = new int[n2];//cap phat mien nho cho B
	C = new int[n1+n2];//cap phat mien nho cho C
	for(int i=0; i<n1; i++) //nhap du lieu cho A[]
		cin>>A[i];
	for(int i=0; i<n2; i++) //nhap du lieu cho B[]
		cin>>B[i];		
	merge (A, A+n1, B,B+n2,C);	//Hop nhat A, B thanh C
	for(int i=0; i<n1+n2; i++) //dua ra ket qua mot test
		cout<<C[i]<<" ";
	cout<<endl;
	delete A; delete B;delete C;//giai phong bo nho cho A, B, C
}
int main () {
	int T, n1, n2; 
	int *A, *B, *C;
	cin>>T;
	while(T--) {
		cin>>n1>>n2;
		Solution(A, n1, B, n2, C);
	}
}
