#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 6
 
void spiralPrint(int m, int n, int a[R][C], int c)
{
    int i, k = 0, l = 0;
    int count = 0;
 
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    while (k < m && l < n) {
        /* check the first row from
            the remaining rows */
        for (i = l; i < n; ++i) {
            count++;
 
            if (count == c)
                cout << a[k][i] << " ";
        }
        k++;
 
        /* check the last column
        from the remaining columns */
        for (i = k; i < m; ++i) {
            count++;
 
            if (count == c)
                cout << a[i][n - 1] << " ";
        }
        n--;
 
        /* check the last row from
                the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                count++;
 
                if (count == c)
                    cout << a[m - 1][i] << " ";
            }
            m--;
        }
 
        /* check the first column from
                the remaining columns */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                count++;
 
                if (count == c)
                    cout << a[i][l] << " ";
            }
            l++;
        }
    }
}
 
/* Driver program to test above functions */
int main()
{
    int a[R][C] = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } },
        k = 17;
 
    spiralPrint(R, C, a, k);
    return 0;
}
