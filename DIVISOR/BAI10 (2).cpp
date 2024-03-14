// C++ program to to check whether a number is 
// Smith Number or not. 
#include<bits/stdc++.h> 
using namespace std; 
const int MAX  = 100001; 
int E[MAX];  
//sang nguyen to Eratosthenes
void Eratosthenes(void) { //submit fail	   
	bool  primes[MAX];  E[0]=2;//so nguyen to dau tien la 2;
    memset(primes, true, sizeof(primes)); //dien vao gia tri true  
    primes[0]=primes[1]=false;//so 0, 1 khong la nguyen to    
    for (int p=2; p*p<MAX; p++) { 
        if (primes[p] == true){ //neu la nguyen to         	
            for (int i=p*p; i<MAX; i += p) //cac so khong phai nguyen to
                primes[i] = false; 
        } 
    } 
    int k=0;
    for(int i=0; i<MAX; i++) {
    	if(primes[i]==true) {
    		E[k++]=i; 
		}
	}
}  

// Tinh tong cac chu so cua mot so
int sumDigit(int k){
	int s =0; //goi s la tong cac chu so
	while(k!=0){
		s = s + k%10; k=k/10;
	}
	return s;
}
// kiem tra n co phai la Smith  
bool isSmith(int n) { //n=666
    int original_no = sumDigit(n);
    int k=n;
	cout<<"sumDigit="<<original_no<<endl;   
    // tim tong cac chu so cua cac uoc nguyen to cua n
    int pDigitSum = 0; 
    for (int i = 0; E[i] <= n/2; i++) { //duyet tren cac so nguyen to
        while (n % E[i] == 0)  {//neu n chia het cho cac so nguyen to
            int p = sumDigit(E[i]); //p tong cac chu so cua  so nguyen to thu i            
            cout<<E[i]<<" ";
            pDigitSum = pDigitSum + p;
            n = n/E[i]; //chia n cho uoc nguyen to primes[i]
        } 
    }   
    cout<<n<<endl;
    if (n!=1 && n!=k) pDigitSum = pDigitSum + sumDigit(n);    
    return (pDigitSum == original_no); 
} 
// Test Solution 
int main() { 
	Eratosthenes();
	int T, N; cin>>T;
	while(T--){
		cin>>N; cout<<isSmith(N)<<endl;
	}
}
//60493 : 0
