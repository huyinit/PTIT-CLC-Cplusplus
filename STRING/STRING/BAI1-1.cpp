//BAI 1-1: K-gram: Thay doi nhieu nhat k ky tu de thanh Pangram
#include<bits/stdc++.h> 
using namespace std; 
int Solution (string str, int k) { 
    //B1: tao mark[] danh dau cac ky tu xuat hien trong str
    bool mark[26]={false}; //tap cac ky tu
	int index, n = str.length(); //n la do dai xau
    for (int i=0; i<n; i++)  { //duyet tu dau den cuoi xau
        if ('A' <= str[i] && str[i] <= 'Z') { //neu str[i] la 'A'..'Z'
        	index = str[i] - 'A';//chuyen thanh cac so 0,.., 25
        	mark[index]=true; //ghi nhan ky tu xuat hien trong str
		}
        else if('a' <= str[i] && str[i] <= 'z') {//neu str[i] la 'a'..'z'
        	index = str[i] - 'a';//chuyen thanh cac so 0,.., 25
        	mark[index]=true;//ghi nhan ky tu xuat hien trong str
		}
    }   
    //B2:dem cac phan tu cua mark[i] = true    
    for (int i=0; i<=25; i++) { //duyet tren mang mark[]
    	if (mark[i]==false ) { //neu ky tu chua duoc danh dau
			count++; //ghi nhan so ky tu con thieu
		}
	}
	//B3: tra lai ket qua
	if(n<26) //neu do dai xau nho hon 26
		return 0;//khong co phep thay the
	return(k>=count); //tra lai ket qua bieu thuc     
} 
//test solution  
int main() { 
    string str; int T, k;  cin>>T;
    while(T--){
    	cin>>str;cin>>k;
    	cout<<Solution(str,k)<<endl;
	}
} 
//qwertyuiopqwertyuiopqwertyuiopqwertyuiop: 10
//qwertyuiopqwertyuiopqwertyuiopqwertyuiop
//qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
//qwertyuiopqwertyuiopqwertyuiopqwertyuiop: 20
//qwdfsdsdg
//12132131
