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


bool jump(vector<int> &nums)
{
    int n = nums.size();

    int maxreached = 0;
    for (auto i = 0; i < n - 1; i++)
    {
        if (i > maxreached)
        {
            return false;
        }
        maxreached = max(maxreached, nums[i] + i);
    }
    return true;
}

int main()
{
    optimize();
    vector<int>v={1 , 0 , 1 , 0};
    bool res =  jump(v);
    cout<<(res ? "true": "false")<<el;

    r0;
}