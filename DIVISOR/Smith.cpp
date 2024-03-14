// Kiem tra mot so co phai Smith
#include<bits/stdc++.h> 
using namespace std; 
const int MAX  = 100001; 
bool prime[MAX];
void Eratosthenes(void) { 
	memset(prime, true, sizeof(prime)); //dien vao gia tri true
	prime[0]=false; prime[1]=false; //hai so nay khong phai nguyen to
    for (int p=2; p*p<MAX; p++) { //duyet tu 2 tro di
        if (prime[p] == true){ //neu la nguyen to 
            for (int i=p*p; i<MAX; i += p) //cac so khong phai nguyen to
                prime[i] = false; 
        } 
    } 
}  
int SumDigits(int n){
	int sum=0;
	while(n!=0){
		int du=n%10; n=n/10; sum = sum+du;
	}
	return sum;
}
bool isSmith(int n){
	//B1: tim tong tat ca cac chu so la uoc so nguyen to cua n
	
}
// Returns true if n is a Smith number, else false. 
bool isSmith(int n) 
{ 
    int original_no = n; 
  
    // Find sum the digits of prime factors of n 
    int pDigitSum = 0; 
    for (int i = 0; primes[i] <= n/2; i++) 
    { 
        while (n % primes[i] == 0) 
        { 
            // If primes[i] is a prime factor, 
            // add its digits to pDigitSum. 
            int p = primes[i]; 
            n = n/p; 
            while (p > 0) 
            { 
                pDigitSum += (p % 10); 
                p = p/10; 
            } 
        } 
    } 
  
    // If n!=1 then one prime factor still to be 
    // summed up; 
    if (n != 1 && n != original_no) 
    { 
        while (n > 0) 
        { 
            pDigitSum = pDigitSum + n%10; 
            n = n/10; 
        } 
    } 
  
    // All prime factors digits summed up 
    // Now sum the original number digits 
    int sumDigits = 0; 
    while (original_no > 0) 
    { 
        sumDigits = sumDigits + original_no % 10; 
        original_no = original_no/10; 
    } 
  
    // If sum of digits in prime factors and sum 
    // of digits in original number are same, then 
    // return true. Else return false. 
    return (pDigitSum == sumDigits); 
}
int main(void){
	Eratosthenes();
}
