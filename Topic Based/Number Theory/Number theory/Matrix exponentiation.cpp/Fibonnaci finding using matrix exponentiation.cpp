// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Multiplication(vector<vector<ll>> &res, vector<vector<ll>> &T, ll n) {
    vector<vector<ll>> temp(2, vector<ll>(2, 0));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            temp[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                ll x = (res[i][k] * T[k][j]);
                temp[i][j] = (temp[i][j] + x);
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res[i][j] = temp[i][j];
        }
    }
}

ll Power(ll a1, ll a2, ll n) {
    vector<vector<ll>> I(2, vector<ll>(2, 0));
    vector<vector<ll>> T(2, vector<ll>(2, 0));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            I[i][j] = (i == j) ? 1 : 0;
        }
    }

    T[0][0] = 0;
    T[0][1] = T[1][0] = T[1][1] = 1;

    n--; // T^(n-1)
    while (n) {
        if (n & 1) {
            Multiplication(I, T, 2);
        }
        Multiplication(T, T, 2);
        n /= 2;
    }

    return (a1 * I[0][1] + a2 * I[1][1]);
}

int main() {
    ll n;
    cin >> n; // n = n-th Fibonacci number;
    ll a1 = 0, a2 = 1; // 0-> 0th, 1-st

    ll ans = Power(a1, a2, n);
    cout << n << "-th Fibonacci number is: " << ans << endl;

    return 0;
}
