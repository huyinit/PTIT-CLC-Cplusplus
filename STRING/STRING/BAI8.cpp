//Tinh tong cua tat ca cac so co mat trong string
#include <bits/stdc++.h>
using namespace std; 
// Solution1: Giai phap su dung string
int Solution1(string str) {    
    string temp = "";//khoi tao xau temp la rong     
    int sum = 0;//khoi tao tong tat ca cac so trong xau la 0
	int n = str.length(); //lay n la do dai xau     
    for (int i=0; i<n; i++) { //duyet tu trai qua phai xau        
        if (isdigit(str[i])) //neu ta gap mot ky tu so
            temp = temp + str[i];//noi them temp voi str[i]         
        else { //neu khong phai ky tu so
        	char s[20]; strcpy(s, temp.c_str());
        	int k = atoi(s);// chuyen s[] thanh so k        	
        	sum = sum + k; //cong so k vao sum
            //sum += atoi(temp.c_str());             
            temp = ""; //khoi tao lai temp la rong
        }
    } 
    // can than cho so cuoi cung
    return sum + atoi(temp.c_str());
} 
// Solution2: Giai phap su dung char *
int Solution2(char str[]) {    
    char temp[20];//khoi tao xau temp la rong     
    int sum = 0, t=0;//khoi tao tong tat ca cac so trong xau la 0
	int n = strlen(str); //lay n la do dai xau     
    for (int i=0; i<n; i++) { //duyet tu trai qua phai xau        
        if (isdigit(str[i])) { //neu ta gap mot ky tu so
            temp[t] = str[i];//noi them temp voi str[i]         
            t++;//tang do dai temp[] len 1
    	}
        else { //neu khong phai ky tu so
        	if(t>0) {
        		temp[t]='\0';        		
        		int k = atoi(temp);// chuyen temp[] thanh so k 
        		sum = sum + k; //cong so k vao sum        		
        		t = 0; //khoi tao lai k
			}
    	} 
	}
    // kiem tra xau temp[]
    if(t>0) { 
   		temp[t]='\0';
   		int k = atoi(temp);// chuyen s[] thanh so k 
   		sum = sum + k; //cong so k vao sum
	}
    return sum;
}
// Test Solution
int main(void) {    
	int T; cin>>T;
	while (T--) {
		char str[1000]; cin>>str;
		cout<<Solution2(str)<<endl;
	}    
}
