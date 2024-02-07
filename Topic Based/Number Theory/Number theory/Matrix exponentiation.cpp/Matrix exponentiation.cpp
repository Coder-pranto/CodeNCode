// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void Multiplication(vector<vector<ll>> &res, vector<vector<ll>> &arr, ll n) {
    vector<vector<ll>> temp(n, vector<ll>(n, 0));

    for (auto i = 0; i < n; i++) {
        for (auto j = 0; j < n; j++) {
            temp[i][j] = 0;
            for (auto k = 0; k < n; k++) {
                ll x = (res[i][k] * arr[k][j]);
                temp[i][j] = (temp[i][j] + x);
            }
        }
    }

    for (auto i = 0; i < n; i++) {
        for (auto j = 0; j < n; j++) {
            res[i][j] = temp[i][j];
        }
    }
}


vector<vector<ll>> Power(vector<vector<ll>> &arr, ll n, ll p)
{
    vector<vector<ll>> I(n, vector<ll>(n, 0));
    for (auto i = 0; i < n; i++)
    {
        for (auto j = 0; j < n; j++)
        {
            I[i][j] = (i == j) ? 1 : 0;
        }
    }

    while (p)
    {
        if (p & 1)
        {
            Multiplication(I, arr, n);
        }
        Multiplication(arr, arr, n);
        p = p / 2;
    }

    return I;
}

void Print(vector<vector<ll>> &arr){
    cout<<"Matrix Multiplication : "<<"\n";
    for(auto &i: arr){
        for(auto &j: i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

}

int main()
{

    ll n, p;
    cin >> n >> p; // n = order of matrix, p = power

    vector<vector<ll>> arr(n, vector<ll>(n, 0));

    for (auto i = 0; i < n; i++)
    {
        for (auto j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<vector<ll>> ans = Power(arr, n, p);
    Print(ans);

    return 0;
}
