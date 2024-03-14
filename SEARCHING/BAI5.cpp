//tim phan tu nho nhat, nho thu hai trong mang
#include <bits/stdc++.h> 
using namespace std;   
void Solution(int A[], int n)  {  
    int i, first, second;    
    //TH1: neu mang co 1 phan tu
    if (n < 2) {  //neu mang co 1 phan tu   
        cout<<-1<<endl;//dua ra test -1  
    }    
    first = second = INT_MAX;  //lay hai so la INT_MAX
    for (i = 0; i < n ; i ++)   {  //duyet tren mang A[]
        if (A[i] < first)  { //neu A[i] nho hon first 
            second = first; //lay second = first 
            first = A[i];  //lay first = A[i]
        }    
        // neu A[i] nam giua first va second          
        else if (A[i] < second && A[i] != first)  
            second = A[i];  
    }  
    if (second == INT_MAX)  
        cout<<-1<<endl;  
    else
        cout << first <<" "<<second << endl;  
}  
void Solution1(int A[], int n)  {  
    int i, first, second;        
    if (n < 2) {  //neu mang co 1 phan tu   
        cout<<-1<<endl;  
    }    
    first = second = INT_MAX;  //lay hai so la INT_MAX
    for (i = 0; i < n ; i ++)   {  //tim so nho nhat
        if (A[i] < first)  { //neu A[i] nho hon first 
            first = A[i];  //lay first = A[i]
        }    
    }  
    for (i = 0; i < n ; i ++)   {  //tim so nho thu 2
        if (A[i] < second && A[i]!=first)  { //neu A[i] nho hon first & khac first
            second = A[i];  //lay second = A[i]
        }    
    }      
    if (second == INT_MAX)  
        cout<<-1<<endl;  
    else
        cout << first <<" "<<second << endl;  
}  

//Test Solution  
int main()  {  
	int T, n, *A; cin>>T;
	while(T--){
		cin>>n; A = new int[n];
		for(int i=0; i<n; i++) cin>>A[i];
		Solution1(A, n);
	}
}  

