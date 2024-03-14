// Tim so nho nhat lon hon N
// bang cach trao doi cac chu so
#include <bits/stdc++.h>
using namespace std; 
string X; //xau du lieu so dau vao
int n, OK; //n: do dai xau, Ok- dieu khien test
void Init(void) {
	cin>>X; n=X.length()-1;OK =1;
}
string Next_Greater(void) {
	//B1: tim chi so j sao cho X[j]<X[j+1]
	int j = n-1; //xuat phat tu vi tri n-1;	
	while(j>=0 && X[j]>X[j+1])  
		j--;	
	//B2: neu ton tai j thi : j>=0
	if(j>=0) { 		
		int k=n; //xuat phat tu vi tri phai nhat
		while(X[j]>X[k]) //tim vi tri k: X[j]<X[k]
			k--;
		//doi cho vi tri X[j] cho vi tri X[k]
		int temp=X[j]; X[j]=X[k]; X[k]=temp;
		//Lat nguoc lai doan tu X[j+1].. X[n]
		int r = j+1, s=n;
		while(r<=s) {
			int t = X[r]; X[r]=X[s]; X[s]=t;
			r++; s--;
		}
		return (X);
	}
	else //neu khong ton tai j
		return("-1");
} 
//test solution
int main(void) {
	int T; cin>>T;
	while(T--) {		
		Init();//nhap mot test
		cout<<Next_Greater()<<endl;
	}
}
