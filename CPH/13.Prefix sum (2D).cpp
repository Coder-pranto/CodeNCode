//*Static array queries


//* 2D Prefix Sum - (prefix_sum + queries)

/* Question: You are given a two-dimensional array matrix of size m x n, where matrix[i][j] represents the value at row i and column j. Additionally, you are given a list of queries, each represented by four integers: A, B, C, and D. For each query, you need to calculate the sum of elements in the submatrix defined by the upper-left corner (A, B) and the lower-right corner (C, D) and return the sum. */

//TODO: at first implement the 2D prefix-sum for the matrix.
//TODO: secondly, implement the range query section query section

//BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int arr[N][N];
long long prefix[N][N];

int main()
{
    int n;
    cin>>n;
    for(int i= 1; i<=n; ++i)
    {
        for(int j =1; j<=n; ++j)
        {
            cin>>arr[i][j];
            prefix[i][j] = arr[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
        }
    }


    int q;
    cin>>q;

    while(q--)
    {
        int x1, y1, x2, y2;

        cin>>x1>>y1>>x2>>y2;

        cout<<(prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1])<<endl;
    }


    return 0;

}



/* input : 
 3 
 3 6 2
 8 9 2 
 3 4 1
 2
 1 1 2 2
 1 2 3 3


 */