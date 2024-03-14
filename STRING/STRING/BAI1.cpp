//BAI 1: 
//kiem tra mot xau co phai la Pan-string
#include<bits/stdc++.h> 
using namespace std; 
bool Solution (string str) { 
    // tao Hash danh dau cac ky tu trong string
    bool mark[26]={false}; int index; 
    for (int i=0; i<str.length(); i++)  { 
        if ('A' <= str[i] && str[i] <= 'Z') {
        	index = str[i] - 'A';
        	mark[index]=true;
		}
        else if('a' <= str[i] && str[i] <= 'z') {
        	index = str[i] - 'a';
        	mark[index]=true;
		}
    }   
    // kiem tra cac phan tu cua mark[i] = true
    for (int i=0; i<=25; i++) 
        if (mark[i] == false) 
            return (false);       
    return (true); 
} 
//test solution  
int main() { 
    string str; int T;  cin>>T;
    while(T--){
    	cin>>str;
    	cout<<Solution(str)<<endl;
	}
} 
