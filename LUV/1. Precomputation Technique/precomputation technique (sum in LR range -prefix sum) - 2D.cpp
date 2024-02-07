//
//given an 2D array of N*N integers.Given  Q queries and each query given (x1,y1) & (x2,y2) co-ordinates
//print sum of square represented by (x1,y1) as top left point and (c,d) as bottom right point.

//BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int arr[N][N];
long long pf[N][N];



int main()

{

    int n;
    cin>>n;
    for(int i= 1; i<=n; ++i)
    {
        for(int j =1; j<=n; ++j)
        {
            cin>>arr[i][j];
            pf[i][j] = arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }


    int q;
    cin>>q;

    while(q--)
    {
        int x1, y1, x2, y2;

        cin>>x1>>y1>>x2>>y2;

        cout<<(pf[x2][y2] - pf[x1-1][y2] - pf[x2][y1-1] + pf[x1-1][y1-1])<<endl;
    }


    return 0;

}
