//thua so nguyen to nho nhat 
//cua cac so nho hon hoac bang n
#include<bits/stdc++.h> 
const int MAX = 1001;
using namespace std;   
void Solution(int n) { 
    // tao mang luu thua so nguyen to nho nhat
    int  ans[n+1]; 
    //thiet lap ans[i]=0
	for(int i=0; i<=n; i++) 
		ans[i]=0;        
    ans[1] = 1;// luu thua so nho nhat cua 1 la 1    
    for (int i = 2; i <= n; i++) { //duyet i=2,..,n
        // ans[i] == 0 co nghia i la nguyen to        
        if (ans[i] == 0) { //neu i la nguyen to             
            ans[i] = i; //thua so nho nhat la chinh no  
            // su dung sang eratothesese      
			//danh dau thua so nguyen to nho nhat      
            for (int j = 2*i; j <= n; j += i) 
                if (ans[j] == 0) 
                   ans[j] = i; 
        } 
    } 
    //in ra thua so nguyen to nho nhat
    for (int i = 1; i <= n; i++) 
        cout <<ans[i]<< " "; 
    cout<<endl;
} 
//chuong trinh chinh
int main(void) { 
	int T, n; cin>>T;
	while(T--){
		cin>>n;
		Solution(n);	
	}
} 
