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

vector<pair<int, int>> vp;

void towerofhanoi(int n, int from_rod, int to_rod,
                  int aux_rod)
{
    if (n == 0)
    {
        return;
    }
    towerofhanoi(n - 1, from_rod, aux_rod, to_rod);
    vp.pb({from_rod, to_rod});
    towerofhanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    optimize();
    int n;
    cin >> n;
    towerofhanoi(n, 1, 3, 2);
    cout << sz(vp) << el;
    for (auto &u : vp)
    {
        cout << u.first << " " << u.second << el;
    }

    r0;
}