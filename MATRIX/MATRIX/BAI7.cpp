// BAI 7 : In ma tran theo hinh rich rac
#include <bits/stdc++.h>
#define MAX 101
using namespace std;   
void Solution(int A[MAX][MAX], int n) { 
    // duet theo cac hang
    for (int i = 0; i < n; i++) {   
        // neu chi so hang la chan: in tu trai qua phai
        if (i % 2 == 0) { 
            for (int j = 0; j < n; j++) 
                cout << A[i][j] << " ";   
        } 
		//neu chi so hang la le: in tu phai qua trai
		else { 
            for (int j = n - 1; j >= 0; j--) 
                cout << A[i][j] << " "; 
        } 
    } 
    cout<<endl;
} 
// Test solution 
int main() { 
    int A[MAX][MAX], n, T; cin>>T;
    while(T--){
    	cin>>n;
    	for(int i=0; i<n; i++){
    		for(int j=0; j<n; j++) 
    			cin>>A[i][j];
		}
		Solution(A,n);		
	}
} 
