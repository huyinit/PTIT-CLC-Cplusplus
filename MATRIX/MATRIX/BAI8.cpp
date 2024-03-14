// BAI 8: in 2 cuon cua ma tran 4n*4n
#include<bits/stdc++.h> 
using namespace std;   
// In ra cac cuon cua ma tran cap : 4n x 4n  
void Solution(int n) { 
    // B1: tim so phan tu cua moi cuon
    int m = 8*n*n;   
    // B2: dien cac so vao cuon 1 
    int coil1[m];   
    coil1[0] = 8*n*n + 2*n; //phan tu dau tien cua cuon 1
    int curr = coil1[0];   
    int nflg = 1, step = 2;   
    // dien m-1 phan tu con lai vao cuon 1
    int index = 1; 
    while (index < m) { 
        // dien cac phan tu o buoc hien tai tu tren xuon
        for (int i=0; i<step; i++) { 
            // phan tu tiep theo tu phan tu hien tai
            curr = coil1[index++] = (curr - 4*n*nflg); 
            if (index >= m) 
                break; 
        } 
        if (index >= m) 
            break;   
        // dien cac phan tu tai buoc hien tai tu duoi len
        for (int i=0; i<step; i++) { 
            curr = coil1[index++] = curr + nflg; 
            if (index >= m) 
                break; 
        } 
        nflg = nflg*(-1); 
        step += 2; 
    }   
    //B3: dien cuon 2 tu cuon 1
    int coil2[m]; 
    for (int i=0; i<8*n*n; i++) 
        coil2[i] = 16*n*n + 1 -coil1[i]; 
  
    //B4: Dua ra ket qua     
    for(int i=0; i<8*n*n; i++) 
        cout << coil1[i] << " "; 
    cout << endl; 
    for (int i=0; i<8*n*n; i++) 
        cout << coil2[i] << " "; 
    cout<<endl;
} 
// Test solution 
int main() { 
    int  n, T; cin>>T;
    while(T--){
    	cin>>n;
		Solution(n);		
	}
}  
 
