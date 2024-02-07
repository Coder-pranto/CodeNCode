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
#define allr(x)    (x).rbegin(), (x).rend()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();
    int x = 8;
    if (x == 0)
        return x;
    int left = 1;
    int right = x;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int temp = x / mid;
        if (mid == temp)
            return mid;
        else if (mid > temp)
            right = mid - 1;
        else
            left = mid + 1;
    }

    cout<<right;

    r0;
}