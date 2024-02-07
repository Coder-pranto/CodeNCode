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

    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int l = 0, r = n - 1;
        int ans = -1;
        while (l<r)
        {
            int dis = min(height[l], height[r]);
            ans = max(ans, (r - l) * dis);
           if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }

        return ans;
    }

int main()
{
    optimize();
    vector<int> v= {1,8,6,2,5,4,8,3,7};
    int ans = maxArea(v);

     cout<<ans<<el;
    r0;
}