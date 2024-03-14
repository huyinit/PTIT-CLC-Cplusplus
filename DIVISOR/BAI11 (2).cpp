// Kiem tra mot so co la so hoan hao
#include<iostream> 
using namespace std;   
// Returns true if n is perfect 
bool isPerfect(long long int n) {     
    long long int sum = 1;        
    for (long long int i=2; i*i<=n; i++) { 
        if (n%i==0) { //neu n chia het cho i
            if(i*i!=n) //neu n la so chinh phuong
                sum = sum + i + n/i; 
            else //truong hop khac
                sum=sum+i; 
        } 
    }  
    if (sum == n && n != 1) 
          return true;    
     return false; 
} 
// Test Solution 
int main() { 
	long long int T, n; cin>>T;
	while(T--){
		cin>>n; cout<<isPerfect(n)<<endl;
	}
} 
