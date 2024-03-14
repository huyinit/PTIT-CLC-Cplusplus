// tim so nho nhat tao nen boi chuoi ID
#include <bits/stdc++.h> 
using namespace std;    
void Solution(string arr) { 
    // thiet lap max hien tai de chac chan chan khong dung lai cac ky tu
    int curr_max = 0;   
    // thiet lap so cuoi cung
    int last_entry = 0;   
    int j;   
    // lap tu trai qua phai
    for (int i=0; i<arr.length(); i++) {         
        int noOfNextD = 0; //so luong ky tu D  
        switch(arr[i]) { //tuyen theo arr[i]
        	case 'I': //neu la ky tu I
	            j = i+1; 
    	        while (arr[j] == 'D' && j < arr.length()) { 
                	noOfNextD++; j++; 
            	}                 
            	if (i==0)  { //neu I la ky tu dau tien
                	curr_max = noOfNextD + 2; //tang so D len 2  
                    cout <<++last_entry; //so dau tien la 1
                	cout <<curr_max; //so tiep theo la 2                  	
                	last_entry = curr_max; //thiet lap so cuoi dat duoc
            	} 
            	else { //neu I khong la ky tu dau tien
                	curr_max = curr_max + noOfNextD + 1;                  
                	last_entry = curr_max; 
                	cout <<last_entry; 
            	}   
            	// in tat ca cac ky tu D giam dan
            	for (int k=0; k<noOfNextD; k++) { 
                	cout <<--last_entry; 
                	i++; //nho tang i cho nay
            	} 
            	break;           	
        	case 'D': //xu ly ky tu D
            	if (i == 0)  { //neu D la ky tu dau tien                	
                	j = i+1; //dem so ky tu D tiep theo
                	while (arr[j] == 'D' && j < arr.length()) { 
                    	noOfNextD++; j++; 
                	}   
                	// tim so se duoc in ra
                	curr_max = noOfNextD + 2;   
                	// dua ra hai so nho nhat
                	cout <<curr_max <<curr_max - 1;   
                	// luu so cuoi cung 
                	last_entry = curr_max - 1; 
            	} 
            	else { //neu D khong la ky tu dau tien                	
                	cout << last_entry - 1; 
                	last_entry--; 
            	} 
            	break; 
        	} 
    } 
    cout << endl; 
}   
// Test Solution
int main() { 
    string str; int n, T; cin>>T;
    while(T--){
    	cin>>str;
    	Solution(str);
	}
}  

