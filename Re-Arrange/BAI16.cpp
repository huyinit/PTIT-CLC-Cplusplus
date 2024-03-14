//Tim so lon nhat nho hon N bang mot phep doi cho
#include <bits/stdc++.h> 
using namespace std; 
string Solution(string str) { 
    int len = str.length(); //lay do dai so
    int index = -1; //ghi nhan index ban dau
    //B1: tim tu ben phai chu so lon hon so tiep theo
    // 34125: ta tim duoc t=1 o vi tri so 4
    for (int i = len - 2; i >= 0; i--) { 
        if (str[i] > str[i+1]) { 
            index = i; //ghi nhan index
            break; 
        } 
    }     
    //B2: tim chi so t sao cho str[i]>= str[t] 
    //34125: ta tim duoc t=3 voi str[3]='2'
    int t = -1; 
    for (int i = len - 1; i > index; i--) { 
        if (str[i] < str[index]) { 
            if (t == -1) 
                t = i; 
            else if (str[i] >= str[t]) 
                t = i; 
        } 
    } 	          
    if (index == -1) //khong co cach trao doi
        return "-1";           
   	if (index==0 && str[t]=='0') { //chu y test nay
        return "-1";
    }      
    if (t != -1) { //test nay OK
        swap(str[index], str[t]); 
        return str; 
    } 
    return "-1"; 
} 
int main() { 
	int T; string str; cin>>T;
	while(T--){
		cin>>str;
		cout << Solution(str)<<endl;	
	}
} 
//100
