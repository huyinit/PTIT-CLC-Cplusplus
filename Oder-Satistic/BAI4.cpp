//tim day con co tong lon nhat sao cho
//hai so canh nhau khong cung mot day con
#include<bits/stdc++.h> 
using namespace std;  
int FindMaxSum(int A[], int n) { 
	//int A[] = {5, 5, 10, 100, 10, 5}; 
  	int max1 = A[0], max2 = 0, temp;   
  	for (int i = 1; i < n; i++)  {  //duyet tu 1,.., n    
    	temp = max(max1, max2); //lay temp = max(max1, max2)      
     	max1 = max2 + A[i]; //lay max1 = max2 + A[i]
     	max2 = temp;      	
  	} 
  	return max(max1, max2);
} 
int Solution(int A[], int n) { 
  	int Max1 = A[0], Max2 = 0, Max;   	
  	for (int i = 1; i < n; i++)   {      	
     	if(Max1>Max2) 
     		Max = Max1;
		else Max =  Max2;        	
     	Max1 = Max2 + A[i]; 
     	Max2 = Max; 
  	} 
	return max(Max1, Max2);
}   
int Max(int A[], int n){
	int sum1=0, sum2=0, sum=0;
	for(int i=0; i<n; i++){
		sum = sum+A[i];
	}
	cout<<sum<<endl;
	for(int i=0; i<n; i+=2){
		sum1 = sum1+A[i];
	}
	return(max(sum1, sum-sum1));
}
//Test solution
int main() { 
  	int T, n, *A; cin>>T;
  	while(T--){
  		cin>>n; A = new int[n];
  		for(int i=0; i<n; i++) cin>>A[i];
		cout<<Max(A,n)<<endl; delete A;  	
	}
} 
