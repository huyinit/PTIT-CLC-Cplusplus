//https://www.geeksforgeeks.org/number-of-paths-with-exactly-k-coins/
// A Naive Recursive C++ program
// to count paths with exactly
// 'k' coins
#include <bits/stdc++.h>
#define R 3
#define C 3
using namespace std;
 
// Recursive function to count paths with sum k from
// (0, 0) to (m, n)
int pathCountRec(int mat[][C], int m, int n, int k)
{
    // Base cases
    if (m < 0 || n < 0) return 0;
    if (m==0 && n==0) return (k == mat[m][n]);
 
    // (m, n) can be reached either through (m-1, n) or
    // through (m, n-1)
    return pathCountRec(mat, m-1, n, k-mat[m][n]) +
           pathCountRec(mat, m, n-1, k-mat[m][n]);
}
 
// A wrapper over pathCountRec()
int pathCount(int mat[][C], int k)
{
    return pathCountRec(mat, R-1, C-1, k);
}
 
// Driver program
int main()
{
    int k = 12;
    int mat[R][C] = { {1, 2, 3},
                      {4, 6, 5},
                      {3, 2, 1}
                  };
    cout << pathCount(mat, k);
    return 0;
}
