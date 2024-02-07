//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0
#define bb break
#define cc continue
#define sz(x)   (int )x.size()
#define pb push_back
#define epb emplace_back
#define all(x)     (x).begin(),(x).end()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int M = 1e9;

int main()
{
    optimize();
    kase
    {
        ll a, b;
        cin >> a >> b;
        if ((2 * a - b) >= 0 && (2 * a - b) % 3 == 0 && (2 * b - a) >= 0 && (2 * b - a) % 3 == 0)
        {
            cout << "YES" << el;
        }
        else
        {
            cout << "NO" << el;
        }
    }
    r0;
}

// formula: 
// {
//     a = x.1 + y.2
//     b = x.2 + y.1

//     after solving: 
//     x = (2a - b)/3;
//     y = (2b - a)/3;

//     condition : (2a - b)>=0
//                 (2b - a)>=0 
// }