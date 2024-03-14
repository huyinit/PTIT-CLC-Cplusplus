// tim kiem tuyen tinh  
#include <iostream> 
using namespace std; 
  
int search(int A[], int n, int x) {     
    for (int i = 1; i <= n; i++) //duyet tu dau den cuoi mang
        if (A[i] == x) //neu gap x
            return i; //tra lai vi tri cua x
    return -1; //ket luan khong tim thay
}   
int main(void) { 
    int T, n, x, *A; cin>>T;
    while(T--){
    	cin>>n>>x; A = new int[n+1];
    	for(int i=1; i<=n; i++) cin>>A[i];
    	cout<<search(A,n, x)<<endl;
    	delete A;
	}
} 
//int arr[] = { 2, 3, 4, 10, 40 }; 
  //  int x = 10; 
